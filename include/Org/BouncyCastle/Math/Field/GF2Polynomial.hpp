// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Math.Field.IPolynomial
#include "Org/BouncyCastle/Math/Field/IPolynomial.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: Org.BouncyCastle.Math.Field
namespace Org::BouncyCastle::Math::Field {
  // Forward declaring type: GF2Polynomial
  class GF2Polynomial;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Math::Field::GF2Polynomial);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::Field::GF2Polynomial*, "Org.BouncyCastle.Math.Field", "GF2Polynomial");
// Type namespace: Org.BouncyCastle.Math.Field
namespace Org::BouncyCastle::Math::Field {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.Field.GF2Polynomial
  // [TokenAttribute] Offset: FFFFFFFF
  class GF2Polynomial : public ::Il2CppObject/*, public ::Org::BouncyCastle::Math::Field::IPolynomial*/ {
    public:
    public:
    // protected readonly System.Int32[] exponents
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<int> exponents;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Org::BouncyCastle::Math::Field::IPolynomial
    operator ::Org::BouncyCastle::Math::Field::IPolynomial() noexcept {
      return *reinterpret_cast<::Org::BouncyCastle::Math::Field::IPolynomial*>(this);
    }
    // Creating interface conversion operator: i_IPolynomial
    inline ::Org::BouncyCastle::Math::Field::IPolynomial* i_IPolynomial() noexcept {
      return reinterpret_cast<::Org::BouncyCastle::Math::Field::IPolynomial*>(this);
    }
    // Creating conversion operator: operator ::ArrayW<int>
    constexpr operator ::ArrayW<int>() const noexcept {
      return exponents;
    }
    // Get instance field reference: protected readonly System.Int32[] exponents
    [[deprecated("Use field access instead!")]] ::ArrayW<int>& dyn_exponents();
    // public System.Int32 get_Degree()
    // Offset: 0x237EEA0
    int get_Degree();
    // System.Void .ctor(System.Int32[] exponents)
    // Offset: 0x237EB58
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GF2Polynomial* New_ctor(::ArrayW<int> exponents) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Math::Field::GF2Polynomial::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GF2Polynomial*, creationType>(exponents)));
    }
    // public System.Int32[] GetExponentsPresent()
    // Offset: 0x237EEE0
    ::ArrayW<int> GetExponentsPresent();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x237EF4C
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x237F034
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // Org.BouncyCastle.Math.Field.GF2Polynomial
  #pragma pack(pop)
  static check_size<sizeof(GF2Polynomial), 16 + sizeof(::ArrayW<int>)> __Org_BouncyCastle_Math_Field_GF2PolynomialSizeCheck;
  static_assert(sizeof(GF2Polynomial) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Field::GF2Polynomial::get_Degree
// Il2CppName: get_Degree
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Math::Field::GF2Polynomial::*)()>(&Org::BouncyCastle::Math::Field::GF2Polynomial::get_Degree)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Field::GF2Polynomial*), "get_Degree", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Field::GF2Polynomial::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Field::GF2Polynomial::GetExponentsPresent
// Il2CppName: GetExponentsPresent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int> (Org::BouncyCastle::Math::Field::GF2Polynomial::*)()>(&Org::BouncyCastle::Math::Field::GF2Polynomial::GetExponentsPresent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Field::GF2Polynomial*), "GetExponentsPresent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Field::GF2Polynomial::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Math::Field::GF2Polynomial::*)(::Il2CppObject*)>(&Org::BouncyCastle::Math::Field::GF2Polynomial::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Field::GF2Polynomial*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Field::GF2Polynomial::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Math::Field::GF2Polynomial::*)()>(&Org::BouncyCastle::Math::Field::GF2Polynomial::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Field::GF2Polynomial*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
