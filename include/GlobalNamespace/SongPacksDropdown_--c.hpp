// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: SongPacksDropdown
#include "GlobalNamespace/SongPacksDropdown.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
NEED_NO_BOX(::GlobalNamespace::SongPacksDropdown::$$c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SongPacksDropdown::$$c*, "", "SongPacksDropdown/<>c");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: SongPacksDropdown/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class SongPacksDropdown::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly SongPacksDropdown/<>c <>9
    static ::GlobalNamespace::SongPacksDropdown::$$c* _get_$$9();
    // Set static field: static public readonly SongPacksDropdown/<>c <>9
    static void _set_$$9(::GlobalNamespace::SongPacksDropdown::$$c* value);
    // Get static field: static public System.Func`2<System.String,System.String> <>9__7_0
    static ::System::Func_2<::StringW, ::StringW>* _get_$$9__7_0();
    // Set static field: static public System.Func`2<System.String,System.String> <>9__7_0
    static void _set_$$9__7_0(::System::Func_2<::StringW, ::StringW>* value);
    // static private System.Void .cctor()
    // Offset: 0x1477AFC
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x1477B60
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SongPacksDropdown::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SongPacksDropdown::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SongPacksDropdown::$$c*, creationType>()));
    }
    // System.String <LazyInit>b__7_0(System.String serializedName)
    // Offset: 0x1477B68
    ::StringW $LazyInit$b__7_0(::StringW serializedName);
  }; // SongPacksDropdown/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SongPacksDropdown::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::SongPacksDropdown::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongPacksDropdown::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongPacksDropdown::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SongPacksDropdown::$$c::$LazyInit$b__7_0
// Il2CppName: <LazyInit>b__7_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::SongPacksDropdown::$$c::*)(::StringW)>(&GlobalNamespace::SongPacksDropdown::$$c::$LazyInit$b__7_0)> {
  static const MethodInfo* get() {
    static auto* serializedName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongPacksDropdown::$$c*), "<LazyInit>b__7_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{serializedName});
  }
};
