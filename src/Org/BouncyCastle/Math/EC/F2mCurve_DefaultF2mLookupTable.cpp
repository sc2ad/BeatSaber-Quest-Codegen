// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Math.EC.F2mCurve/DefaultF2mLookupTable
#include "Org/BouncyCastle/Math/EC/F2mCurve_DefaultF2mLookupTable.hpp"
// Including type: Org.BouncyCastle.Math.EC.ECPoint
#include "Org/BouncyCastle/Math/EC/ECPoint.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Org.BouncyCastle.Math.EC.F2mCurve/DefaultF2mLookupTable..ctor
Org::BouncyCastle::Math::EC::F2mCurve::DefaultF2mLookupTable* Org::BouncyCastle::Math::EC::F2mCurve::DefaultF2mLookupTable::New_ctor(Org::BouncyCastle::Math::EC::F2mCurve* outer, ::Array<int64_t>* table, int size) {
  return THROW_UNLESS(il2cpp_utils::New<F2mCurve::DefaultF2mLookupTable*>(outer, table, size));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.F2mCurve/DefaultF2mLookupTable.CreatePoint
Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::F2mCurve::DefaultF2mLookupTable::CreatePoint(::Array<int64_t>* x, ::Array<int64_t>* y) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::Math::EC::ECPoint*>(this, "CreatePoint", x, y));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.F2mCurve/DefaultF2mLookupTable.get_Size
int Org::BouncyCastle::Math::EC::F2mCurve::DefaultF2mLookupTable::get_Size() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_Size"));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.F2mCurve/DefaultF2mLookupTable.Lookup
Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::F2mCurve::DefaultF2mLookupTable::Lookup(int index) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::Math::EC::ECPoint*>(this, "Lookup", index));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.F2mCurve/DefaultF2mLookupTable.LookupVar
Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::F2mCurve::DefaultF2mLookupTable::LookupVar(int index) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::Math::EC::ECPoint*>(this, "LookupVar", index));
}