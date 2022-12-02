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
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MultiplayerScoreProvider::$$c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerScoreProvider::$$c*, "", "MultiplayerScoreProvider/<>c");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerScoreProvider/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class MultiplayerScoreProvider::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly MultiplayerScoreProvider/<>c <>9
    static ::GlobalNamespace::MultiplayerScoreProvider::$$c* _get_$$9();
    // Set static field: static public readonly MultiplayerScoreProvider/<>c <>9
    static void _set_$$9(::GlobalNamespace::MultiplayerScoreProvider::$$c* value);
    // Get static field: static public System.Func`2<MultiplayerScoreProvider/RankedPlayer,System.Boolean> <>9__16_0
    static ::System::Func_2<::GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*, bool>* _get_$$9__16_0();
    // Set static field: static public System.Func`2<MultiplayerScoreProvider/RankedPlayer,System.Boolean> <>9__16_0
    static void _set_$$9__16_0(::System::Func_2<::GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*, bool>* value);
    // static private System.Void .cctor()
    // Offset: 0x14F3244
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x14F32A8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerScoreProvider::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerScoreProvider::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerScoreProvider::$$c*, creationType>()));
    }
    // System.Boolean <Update>b__16_0(MultiplayerScoreProvider/RankedPlayer p)
    // Offset: 0x14F32B0
    bool $Update$b__16_0(::GlobalNamespace::MultiplayerScoreProvider::RankedPlayer* p);
  }; // MultiplayerScoreProvider/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerScoreProvider::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::MultiplayerScoreProvider::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerScoreProvider::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerScoreProvider::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerScoreProvider::$$c::$Update$b__16_0
// Il2CppName: <Update>b__16_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MultiplayerScoreProvider::$$c::*)(::GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*)>(&GlobalNamespace::MultiplayerScoreProvider::$$c::$Update$b__16_0)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("", "MultiplayerScoreProvider/RankedPlayer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerScoreProvider::$$c*), "<Update>b__16_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
