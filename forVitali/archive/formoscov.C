///void formoskov()
///{
///TF1 f1("f1","sin(x)/x",0.,600.);
///f1.Draw();
///}
///void main
///{
///std::cout<<"Hello formoskov.C Begin!  "<<std::endl;
///formoscov();
///std::cout<<"Hello formoskov.C End!!! "<<std::endl;
///        return 0;
///}

//#include <iostream.h>
// script name vitaly.C


double myfun(double *x, double *p) 
{
   //TRandom3 * generator = new TRandom3();
   //double x1 = generator->Uniform(0,1);
   //double y1 = generator->Uniform(0,1);
   //double w1 = x1 + y1;
   //if (w1>=0.&& w1<=1.){
   //   return w1;
   //} else if (w1>1.&& w1<=2.) {
   //   return (2.-w1);
   //} else {
      double ret=*x;
//      double ret=x;
	ret=1./ret;
//	ret=p[2]/ret;
      return (ret);
   // };
}




int formoscov(int j=11, int k=1)
        {
	std::cout<<"formoscov.C ::  Hello Vitaly"<<std::endl;

        double x=3.;
	//double p=0;
	double p[3] = {0.12, 0.21, 0.31};

        std::cout << "moskov x=" <<x<< ",   j=" <<j<< ", k=" <<k<< std::endl;

//	TH2F *h1 = new TH2F("h1","Moskov",1,0,600,100,-1,1);

	TF1 *f1 = new TF1("f1","sin(1*x)",0.,60.);
        TF1 *f2 = new TF1("f2",myfun,0.,60.,0);
// needs attention TF1 *f2 = new TF1("f2",myfun(x,&p),0.,60.,0);


       // std::shared_ptr<TCanvas> c1 = std::make_shared<TCanvas>("c1", "Sin x/x ", 600., 700.);
//        TCanvas *c1  = new TCanvas("c1", "Sin (x) and cos (x)   ", 800, 400);
      
        //c1->Divide(2,2,0,0);
//	h1->Draw();
	f1->Draw();
        f2->Draw("same");

        return 0;
        }
int  main()

//#include <iostream.h>
{
std::cout<<"Hello Vitaly N. Baturin=id "<<std::endl;
formoscov();
std::cout<<"Hello Vitaly N. Baturin=id "<<std::endl;
        return 0;
}

