//  Copyright 2015 Peter Dimov.
//
// Distributed under the Boost Software License, Version 1.0.
//
// See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt

#include <boost/core/lightweight_test_trait.hpp>
#include <boost/mp11/algorithm.hpp>
#include <boost/mp11/integral.hpp>
#include <boost/mp11/list.hpp>

template <int> struct X {};

int main() {
  using boost::mp11::mp_find;
  using boost::mp11::mp_list;
  using boost::mp11::mp_size_t;

  using L = mp_list<
      X<0>, X<1>, X<2>, X<3>, X<4>, X<5>, X<6>, X<7>, X<8>, X<9>, X<10>, X<11>,
      X<12>, X<13>, X<14>, X<15>, X<16>, X<17>, X<18>, X<19>, X<20>, X<21>,
      X<22>, X<23>, X<24>, X<25>, X<26>, X<27>, X<28>, X<29>, X<30>, X<31>,
      X<32>, X<33>, X<34>, X<35>, X<36>, X<37>, X<38>, X<39>, X<40>, X<41>,
      X<42>, X<43>, X<44>, X<45>, X<46>, X<47>, X<48>, X<49>, X<50>, X<51>,
      X<52>, X<53>, X<54>, X<55>, X<56>, X<57>, X<58>, X<59>, X<60>, X<61>,
      X<62>, X<63>, X<64>, X<65>, X<66>, X<67>, X<68>, X<69>, X<70>, X<71>,
      X<72>, X<73>, X<74>, X<75>, X<76>, X<77>, X<78>, X<79>, X<80>, X<81>,
      X<82>, X<83>, X<84>, X<85>, X<86>, X<87>, X<88>, X<89>, X<90>, X<91>,
      X<92>, X<93>, X<94>, X<95>, X<96>, X<97>, X<98>, X<99>, X<100>, X<101>,
      X<102>, X<103>, X<104>, X<105>, X<106>, X<107>, X<108>, X<109>, X<110>,
      X<111>, X<112>, X<113>, X<114>, X<115>, X<116>, X<117>, X<118>, X<119>,
      X<120>, X<121>, X<122>, X<123>, X<124>, X<125>, X<126>, X<127>, X<128>,
      X<129>, X<130>, X<131>, X<132>, X<133>, X<134>, X<135>, X<136>, X<137>,
      X<138>, X<139>, X<140>, X<141>, X<142>, X<143>, X<144>, X<145>, X<146>,
      X<147>, X<148>, X<149>, X<150>, X<151>, X<152>, X<153>, X<154>, X<155>,
      X<156>, X<157>, X<158>, X<159>, X<160>, X<161>, X<162>, X<163>, X<164>,
      X<165>, X<166>, X<167>, X<168>, X<169>, X<170>, X<171>, X<172>, X<173>,
      X<174>, X<175>, X<176>, X<177>, X<178>, X<179>, X<180>, X<181>, X<182>,
      X<183>, X<184>, X<185>, X<186>, X<187>, X<188>, X<189>, X<190>, X<191>,
      X<192>, X<193>, X<194>, X<195>, X<196>, X<197>, X<198>, X<199>, X<200>,
      X<201>, X<202>, X<203>, X<204>, X<205>, X<206>, X<207>, X<208>, X<209>,
      X<210>, X<211>, X<212>, X<213>, X<214>, X<215>, X<216>, X<217>, X<218>,
      X<219>, X<220>, X<221>, X<222>, X<223>, X<224>, X<225>, X<226>, X<227>,
      X<228>, X<229>, X<230>, X<231>, X<232>, X<233>, X<234>, X<235>, X<236>,
      X<237>, X<238>, X<239>, X<240>, X<241>, X<242>, X<243>, X<244>, X<245>,
      X<246>, X<247>, X<248>, X<249>, X<250>, X<251>, X<252>, X<253>, X<254>,
      X<255>>;

  BOOST_TEST_TRAIT_TRUE((std::is_same<mp_find<L, X<0>>, mp_size_t<0>>));
  BOOST_TEST_TRAIT_TRUE((std::is_same<mp_find<L, X<1>>, mp_size_t<1>>));
  BOOST_TEST_TRAIT_TRUE((std::is_same<mp_find<L, X<100>>, mp_size_t<100>>));
  BOOST_TEST_TRAIT_TRUE((std::is_same<mp_find<L, X<254>>, mp_size_t<254>>));
  BOOST_TEST_TRAIT_TRUE((std::is_same<mp_find<L, X<255>>, mp_size_t<255>>));
  return boost::report_errors();
}
