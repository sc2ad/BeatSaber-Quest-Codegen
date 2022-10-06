// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DiffieHellmanUtility/ElipticalCurveKeyPair
#include "GlobalNamespace/DiffieHellmanUtility_ElipticalCurveKeyPair.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::DiffieHellmanUtility::ElipticalCurveKeyPair::$$c__DisplayClass5_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DiffieHellmanUtility::ElipticalCurveKeyPair::$$c__DisplayClass5_0*, "", "DiffieHellmanUtility/ElipticalCurveKeyPair/<>c__DisplayClass5_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: DiffieHellmanUtility/ElipticalCurveKeyPair/<>c__DisplayClass5_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class DiffieHellmanUtility::ElipticalCurveKeyPair::$$c__DisplayClass5_0 : public ::Il2CppObject {
    public:
    public:
    // public DiffieHellmanUtility/ElipticalCurveKeyPair <>4__this
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::DiffieHellmanUtility::ElipticalCurveKeyPair* $$4__this;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::DiffieHellmanUtility::ElipticalCurveKeyPair*) == 0x8);
    // public System.Byte[] clientPublicKey
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<uint8_t> clientPublicKey;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    public:
    // Get instance field reference: public DiffieHellmanUtility/ElipticalCurveKeyPair <>4__this
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::DiffieHellmanUtility::ElipticalCurveKeyPair*& dyn_$$4__this();
    // Get instance field reference: public System.Byte[] clientPublicKey
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_clientPublicKey();
    // public System.Void .ctor()
    // Offset: 0x169E034
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DiffieHellmanUtility::ElipticalCurveKeyPair::$$c__DisplayClass5_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::DiffieHellmanUtility::ElipticalCurveKeyPair::$$c__DisplayClass5_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DiffieHellmanUtility::ElipticalCurveKeyPair::$$c__DisplayClass5_0*, creationType>()));
    }
    // System.Byte[] <GetPreMasterSecretAsync>b__0()
    // Offset: 0x169E0B4
    ::ArrayW<uint8_t> $GetPreMasterSecretAsync$b__0();
  }; // DiffieHellmanUtility/ElipticalCurveKeyPair/<>c__DisplayClass5_0
  #pragma pack(pop)
  static check_size<sizeof(DiffieHellmanUtility::ElipticalCurveKeyPair::$$c__DisplayClass5_0), 24 + sizeof(::ArrayW<uint8_t>)> __GlobalNamespace_DiffieHellmanUtility_ElipticalCurveKeyPair_$$c__DisplayClass5_0SizeCheck;
  static_assert(sizeof(DiffieHellmanUtility::ElipticalCurveKeyPair::$$c__DisplayClass5_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::DiffieHellmanUtility::ElipticalCurveKeyPair::$$c__DisplayClass5_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::DiffieHellmanUtility::ElipticalCurveKeyPair::$$c__DisplayClass5_0::$GetPreMasterSecretAsync$b__0
// Il2CppName: <GetPreMasterSecretAsync>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (GlobalNamespace::DiffieHellmanUtility::ElipticalCurveKeyPair::$$c__DisplayClass5_0::*)()>(&GlobalNamespace::DiffieHellmanUtility::ElipticalCurveKeyPair::$$c__DisplayClass5_0::$GetPreMasterSecretAsync$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DiffieHellmanUtility::ElipticalCurveKeyPair::$$c__DisplayClass5_0*), "<GetPreMasterSecretAsync>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
