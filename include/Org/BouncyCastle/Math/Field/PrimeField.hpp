// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Math.Field.IFiniteField
#include "Org/BouncyCastle/Math/Field/IFiniteField.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.Field
namespace Org::BouncyCastle::Math::Field {
  // Forward declaring type: PrimeField
  class PrimeField;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Math::Field::PrimeField);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::Field::PrimeField*, "Org.BouncyCastle.Math.Field", "PrimeField");
// Type namespace: Org.BouncyCastle.Math.Field
namespace Org::BouncyCastle::Math::Field {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.Field.PrimeField
  // [TokenAttribute] Offset: FFFFFFFF
  class PrimeField : public ::Il2CppObject/*, public ::Org::BouncyCastle::Math::Field::IFiniteField*/ {
    public:
    public:
    // protected readonly Org.BouncyCastle.Math.BigInteger characteristic
    // Size: 0x8
    // Offset: 0x10
    ::Org::BouncyCastle::Math::BigInteger* characteristic;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Math::BigInteger*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Org::BouncyCastle::Math::Field::IFiniteField
    operator ::Org::BouncyCastle::Math::Field::IFiniteField() noexcept {
      return *reinterpret_cast<::Org::BouncyCastle::Math::Field::IFiniteField*>(this);
    }
    // Creating interface conversion operator: i_IFiniteField
    inline ::Org::BouncyCastle::Math::Field::IFiniteField* i_IFiniteField() noexcept {
      return reinterpret_cast<::Org::BouncyCastle::Math::Field::IFiniteField*>(this);
    }
    // Creating conversion operator: operator ::Org::BouncyCastle::Math::BigInteger*
    constexpr operator ::Org::BouncyCastle::Math::BigInteger*() const noexcept {
      return characteristic;
    }
    // Get instance field reference: protected readonly Org.BouncyCastle.Math.BigInteger characteristic
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Math::BigInteger*& dyn_characteristic();
    // public Org.BouncyCastle.Math.BigInteger get_Characteristic()
    // Offset: 0x237F3CC
    ::Org::BouncyCastle::Math::BigInteger* get_Characteristic();
    // public System.Int32 get_Dimension()
    // Offset: 0x237F3D4
    int get_Dimension();
    // System.Void .ctor(Org.BouncyCastle.Math.BigInteger characteristic)
    // Offset: 0x237ED90
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PrimeField* New_ctor(::Org::BouncyCastle::Math::BigInteger* characteristic) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Math::Field::PrimeField::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PrimeField*, creationType>(characteristic)));
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x237F3DC
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x237F4A4
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // Org.BouncyCastle.Math.Field.PrimeField
  #pragma pack(pop)
  static check_size<sizeof(PrimeField), 16 + sizeof(::Org::BouncyCastle::Math::BigInteger*)> __Org_BouncyCastle_Math_Field_PrimeFieldSizeCheck;
  static_assert(sizeof(PrimeField) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Field::PrimeField::get_Characteristic
// Il2CppName: get_Characteristic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::Math::Field::PrimeField::*)()>(&Org::BouncyCastle::Math::Field::PrimeField::get_Characteristic)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Field::PrimeField*), "get_Characteristic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Field::PrimeField::get_Dimension
// Il2CppName: get_Dimension
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Math::Field::PrimeField::*)()>(&Org::BouncyCastle::Math::Field::PrimeField::get_Dimension)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Field::PrimeField*), "get_Dimension", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Field::PrimeField::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Field::PrimeField::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Math::Field::PrimeField::*)(::Il2CppObject*)>(&Org::BouncyCastle::Math::Field::PrimeField::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Field::PrimeField*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Field::PrimeField::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Math::Field::PrimeField::*)()>(&Org::BouncyCastle::Math::Field::PrimeField::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Field::PrimeField*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
