#include "SVGPrinter.h"

namespace Diagrammer {
void SVGPrinter::open_file() {
    file = fopen("testsvg.svg", "w");

}
void SVGPrinter::print_begin() {
    fprintf(this->file, "<html>\n");
    fprintf(this->file, "<body>\n");
    fprintf(this->file, "<svg width=\"100\" height=\"100\" xmlns=\"http://www.w3.org/2000/svg\">");

}
void SVGPrinter::print_end() {
    fprintf(this->file, "</svg>");
    fprintf(this->file, "</body>");
    fprintf(this->file, "</html>");



}
void SVGPrinter::close_file() {
    fclose(this->file);
}


void SVGPrinter::print_diagram(Diagram *diagram) {
    open_file();
    print_begin();
    print_end();
    close_file();
}
void SVGPrinter::visit_rectangle(Rectangle *rect) {}
void SVGPrinter::visit_diagram(Diagram *diagram) {}
} // namespace Diagrammer
