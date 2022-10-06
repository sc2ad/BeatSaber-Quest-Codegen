// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MultiplayerBadgesProvider
#include "GlobalNamespace/MultiplayerBadgesProvider.hpp"
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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerPlayerResultsData
  class MultiplayerPlayerResultsData;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MultiplayerBadgesProvider::$$c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerBadgesProvider::$$c*, "", "MultiplayerBadgesProvider/<>c");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerBadgesProvider/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class MultiplayerBadgesProvider::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly MultiplayerBadgesProvider/<>c <>9
    static ::GlobalNamespace::MultiplayerBadgesProvider::$$c* _get_$$9();
    // Set static field: static public readonly MultiplayerBadgesProvider/<>c <>9
    static void _set_$$9(::GlobalNamespace::MultiplayerBadgesProvider::$$c* value);
    // Get static field: static public System.Func`2<MultiplayerPlayerResultsData,System.Boolean> <>9__7_0
    static ::System::Func_2<::GlobalNamespace::MultiplayerPlayerResultsData*, bool>* _get_$$9__7_0();
    // Set static field: static public System.Func`2<MultiplayerPlayerResultsData,System.Boolean> <>9__7_0
    static void _set_$$9__7_0(::System::Func_2<::GlobalNamespace::MultiplayerPlayerResultsData*, bool>* value);
    // Get static field: static public System.Func`2<MultiplayerPlayerResultsData,System.Int32> <>9__7_1
    static ::System::Func_2<::GlobalNamespace::MultiplayerPlayerResultsData*, int>* _get_$$9__7_1();
    // Set static field: static public System.Func`2<MultiplayerPlayerResultsData,System.Int32> <>9__7_1
    static void _set_$$9__7_1(::System::Func_2<::GlobalNamespace::MultiplayerPlayerResultsData*, int>* value);
    // static private System.Void .cctor()
    // Offset: 0x140A45C
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x140A4C0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerBadgesProvider::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerBadgesProvider::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerBadgesProvider::$$c*, creationType>()));
    }
    // System.Boolean <SelectBadgesAndPutThemIntoResults>b__7_0(MultiplayerPlayerResultsData result)
    // Offset: 0x140A4C8
    bool $SelectBadgesAndPutThemIntoResults$b__7_0(::GlobalNamespace::MultiplayerPlayerResultsData* result);
    // System.Int32 <SelectBadgesAndPutThemIntoResults>b__7_1(MultiplayerPlayerResultsData p)
    // Offset: 0x140A4EC
    int $SelectBadgesAndPutThemIntoResults$b__7_1(::GlobalNamespace::MultiplayerPlayerResultsData* p);
  }; // MultiplayerBadgesProvider/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerBadgesProvider::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::MultiplayerBadgesProvider::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerBadgesProvider::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerBadgesProvider::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerBadgesProvider::$$c::$SelectBadgesAndPutThemIntoResults$b__7_0
// Il2CppName: <SelectBadgesAndPutThemIntoResults>b__7_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MultiplayerBadgesProvider::$$c::*)(::GlobalNamespace::MultiplayerPlayerResultsData*)>(&GlobalNamespace::MultiplayerBadgesProvider::$$c::$SelectBadgesAndPutThemIntoResults$b__7_0)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("", "MultiplayerPlayerResultsData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerBadgesProvider::$$c*), "<SelectBadgesAndPutThemIntoResults>b__7_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerBadgesProvider::$$c::$SelectBadgesAndPutThemIntoResults$b__7_1
// Il2CppName: <SelectBadgesAndPutThemIntoResults>b__7_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::MultiplayerBadgesProvider::$$c::*)(::GlobalNamespace::MultiplayerPlayerResultsData*)>(&GlobalNamespace::MultiplayerBadgesProvider::$$c::$SelectBadgesAndPutThemIntoResults$b__7_1)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("", "MultiplayerPlayerResultsData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerBadgesProvider::$$c*), "<SelectBadgesAndPutThemIntoResults>b__7_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
