//resources main

#include <iostream>
#include <vector>
#include "header/SVGXMLReader.hpp"
#include "header/svggraphics/SVGElement.hpp"
#include "header/svggraphics/LineBuilder.hpp"
#include "header/svggraphics/EllipseBuilder.hpp"

using namespace std;

void configBuilders(SVGXMLReader& reader) {
	// reader will free builders
	// we just create them here and let them go
	reader.AddBuilder("line", new LineBuilder());
	reader.AddBuilder("ellipse", new EllipseBuilder());
}

int main(void)
{
	SVGXMLReader reader;

	configBuilders(reader);

	if (reader.OpenFile("sample.svg")) {
		cout << "Good";
	} else {
		cout << "Cannot open file";
		return 1;
	}

	vector<SVGElement*> elems;
	SVGElement* e;

	while (e = reader.ReadNextElement()) {
		elems.push_back(e);
        cout << e->ToXMLString() << endl;
	}

	int i = elems.size();

	while (--i >= 0) {
		delete elems[i];
	}


	return 0;
}