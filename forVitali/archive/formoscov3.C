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


 Double_t  myfun(Double_t *x, Double_t *par) 
//  double myfun(double *x)
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
      double_t Ksan; // Ks ang 
      double_t Klp=x[0];// KL momentum
	Ksan=par[0]*Klp+par[1]*Klp*Klp;
//	ret=p[2]/ret;
      return (Ksan);
   // };
}

int formoscov3(double beg=0., double end=100.)
        {
	std::cout<<"formoscov3.C message ::  Hello Vitaly "<<std::endl;

        Double_t xx=3.;
	//double p=0;
	Double_t par[3] = {0., 0., 0.};

        std::cout << "moskov p=" << ",   Hist. begins =" <<beg<< ", ends =" <<end<< std::endl;

//	TH2F *h1 = new TH2F("h1","Moskov",1,0,600,100,-1,1);

	TF1 *f1 = new TF1("f1","sin(1*x)",0.,end);
        //f2->SetParameter(0,0.5);
	TF1 *f2 = new TF1("Ks Pol.Ang. vs Momentum",myfun,0.,end,3);
		//f2->SetParameter(0,0.005);
        TF1 *f3 = new TF1("Ks Pol.Ang. vs Momentum 2",myfun,0.,end,3);
        TF1 *f4 = new TF1("Ks Pol.Ang. vs Momentum 2",myfun,0.,end,3);
        TF1 *f5 = new TF1("Ks Pol.Ang. vs Momentum 2",myfun,0.,end,3);
// needs attention TF1 *f2 = new TF1("ETO f2",myfun(x,&p),0.,60.,0);


//        std::shared_ptr<TCanvas> c1 = std::make_shared<TCanvas>("c1", "Sin x/x ", 600., 700.);
        TCanvas *c1  = new TCanvas("c1", "Sin (x) and cos (x)   ", 800, 400);
      
        //c1->Divide(2,2,0,0);
//	h1->Draw();
//	f1->Draw();
        f2->SetParameter(0,0.01);
//      f2->SetParameter(1,0.001);
        f2->Draw();

	f3->SetParameter(0,0.02);
        //f2->SetParameter(1,0.001);
        f3->Draw("same");

	f4->SetParameter(0,0.03); //set momentum
        //f5->SetParameter(1,0.001);
        f4->Draw("same");


	f5->SetParameter(0,0.04); //set momentum
        //f5->SetParameter(1,0.001);
        f5->Draw("same");
        return 0;
       
	 }
int  main()

//#include <iostream.h>
{
std::cout<<"Hello Vitaly N. Baturin=id "<<std::endl;
formoscov3();
std::cout<<"Hello Vitaly N. Baturin=id "<<std::endl;
        return 0;
}

