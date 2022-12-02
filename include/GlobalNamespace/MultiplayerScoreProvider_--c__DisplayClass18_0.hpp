// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MultiplayerScoreProvider
#include "GlobalNamespace/MultiplayerScoreProvider.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MultiplayerScoreProvider::$$c__DisplayClass18_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerScoreProvider::$$c__DisplayClass18_0*, "", "MultiplayerScoreProvider/<>c__DisplayClass18_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerScoreProvider/<>c__DisplayClass18_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class MultiplayerScoreProvider::$$c__DisplayClass18_0 : public ::Il2CppObject {
    public:
    public:
    // public System.String userId
    // Size: 0x8
    // Offset: 0x10
    ::StringW userId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return userId;
    }
    // Get instance field reference: public System.String userId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_userId();
    // public System.Void .ctor()
    // Offset: 0x14F31A4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerScoreProvider::$$c__DisplayClass18_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerScoreProvider::$$c__DisplayClass18_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerScoreProvider::$$c__DisplayClass18_0*, creationType>()));
    }
    // System.Boolean <GetPositionOfPlayer>b__0(MultiplayerScoreProvider/RankedPlayer p)
    // Offset: 0x14F3304
    bool $GetPositionOfPlayer$b__0(::GlobalNamespace::MultiplayerScoreProvider::RankedPlayer* p);
  }; // MultiplayerScoreProvider/<>c__DisplayClass18_0
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerScoreProvider::$$c__DisplayClass18_0), 16 + sizeof(::StringW)> __GlobalNamespace_MultiplayerScoreProvider_$$c__DisplayClass18_0SizeCheck;
  static_assert(sizeof(MultiplayerScoreProvider::$$c__DisplayClass18_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerScoreProvider::$$c__DisplayClass18_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerScoreProvider::$$c__DisplayClass18_0::$GetPositionOfPlayer$b__0
// Il2CppName: <GetPositionOfPlayer>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MultiplayerScoreProvider::$$c__DisplayClass18_0::*)(::GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*)>(&GlobalNamespace::MultiplayerScoreProvider::$$c__DisplayClass18_0::$GetPositionOfPlayer$b__0)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("", "MultiplayerScoreProvider/RankedPlayer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerScoreProvider::$$c__DisplayClass18_0*), "<GetPositionOfPlayer>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
