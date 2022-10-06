// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Mono.Math.Prime.Generator.PrimeGeneratorBase
#include "Mono/Math/Prime/Generator/PrimeGeneratorBase_.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Math
namespace Mono::Math {
  // Forward declaring type: BigInteger
  class BigInteger_;
}
// Completed forward declares
// Type namespace: Mono.Math.Prime.Generator
namespace Mono::Math::Prime::Generator {
  // Forward declaring type: SequentialSearchPrimeGeneratorBase
  class SequentialSearchPrimeGeneratorBase_;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase_);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase_*, "Mono.Math.Prime.Generator", "SequentialSearchPrimeGeneratorBase");
// Type namespace: Mono.Math.Prime.Generator
namespace Mono::Math::Prime::Generator {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase
  // [TokenAttribute] Offset: FFFFFFFF
  class SequentialSearchPrimeGeneratorBase_ : public ::Mono::Math::Prime::Generator::PrimeGeneratorBase_ {
    public:
    // protected Mono.Math.BigInteger GenerateSearchBase(System.Int32 bits, System.Object context)
    // Offset: 0x1FB3424
    ::Mono::Math::BigInteger_* GenerateSearchBase(int bits, ::Il2CppObject* context);
    // public Mono.Math.BigInteger GenerateNewPrime(System.Int32 bits, System.Object context)
    // Offset: 0x1FB34B8
    ::Mono::Math::BigInteger_* GenerateNewPrime(int bits, ::Il2CppObject* context);
    // protected System.Boolean IsPrimeAcceptable(Mono.Math.BigInteger bi, System.Object context)
    // Offset: 0x1FB3BCC
    bool IsPrimeAcceptable(::Mono::Math::BigInteger_* bi, ::Il2CppObject* context);
    // public System.Void .ctor()
    // Offset: 0x1FB2528
    // Implemented from: Mono.Math.Prime.Generator.PrimeGeneratorBase
    // Base method: System.Void PrimeGeneratorBase_::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SequentialSearchPrimeGeneratorBase_* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase_::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SequentialSearchPrimeGeneratorBase_*, creationType>()));
    }
    // public override Mono.Math.BigInteger GenerateNewPrime(System.Int32 bits)
    // Offset: 0x1FB34A8
    // Implemented from: Mono.Math.Prime.Generator.PrimeGeneratorBase
    // Base method: Mono.Math.BigInteger PrimeGeneratorBase_::GenerateNewPrime(System.Int32 bits)
    ::Mono::Math::BigInteger_* GenerateNewPrime(int bits);
  }; // Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase_::GenerateSearchBase
// Il2CppName: GenerateSearchBase
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Math::BigInteger_* (Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase_::*)(int, ::Il2CppObject*)>(&Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase_::GenerateSearchBase)> {
  static const MethodInfo* get() {
    static auto* bits = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase_*), "GenerateSearchBase", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bits, context});
  }
};
// Writing MetadataGetter for method: Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase_::GenerateNewPrime
// Il2CppName: GenerateNewPrime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Math::BigInteger_* (Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase_::*)(int, ::Il2CppObject*)>(&Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase_::GenerateNewPrime)> {
  static const MethodInfo* get() {
    static auto* bits = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase_*), "GenerateNewPrime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bits, context});
  }
};
// Writing MetadataGetter for method: Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase_::IsPrimeAcceptable
// Il2CppName: IsPrimeAcceptable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase_::*)(::Mono::Math::BigInteger_*, ::Il2CppObject*)>(&Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase_::IsPrimeAcceptable)> {
  static const MethodInfo* get() {
    static auto* bi = &::il2cpp_utils::GetClassFromName("Mono.Math", "BigInteger")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase_*), "IsPrimeAcceptable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bi, context});
  }
};
// Writing MetadataGetter for method: Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase_::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase_::GenerateNewPrime
// Il2CppName: GenerateNewPrime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Math::BigInteger_* (Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase_::*)(int)>(&Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase_::GenerateNewPrime)> {
  static const MethodInfo* get() {
    static auto* bits = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase_*), "GenerateNewPrime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bits});
  }
};
