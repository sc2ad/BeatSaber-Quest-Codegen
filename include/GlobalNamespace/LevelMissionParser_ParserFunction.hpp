// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LevelMissionParser
#include "GlobalNamespace/LevelMissionParser.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LevelMissionParser::ParserFunction);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelMissionParser::ParserFunction*, "", "LevelMissionParser/ParserFunction");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: LevelMissionParser/ParserFunction
  // [TokenAttribute] Offset: FFFFFFFF
  class LevelMissionParser::ParserFunction : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x14859C4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LevelMissionParser::ParserFunction* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LevelMissionParser::ParserFunction::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LevelMissionParser::ParserFunction*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(System.Single[] functionParams, System.Int32 paramCount)
    // Offset: 0x14855AC
    bool Invoke(::ArrayW<float> functionParams, int paramCount);
    // public System.IAsyncResult BeginInvoke(System.Single[] functionParams, System.Int32 paramCount, System.AsyncCallback callback, System.Object object)
    // Offset: 0x14859D4
    ::System::IAsyncResult* BeginInvoke(::ArrayW<float> functionParams, int paramCount, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(System.IAsyncResult result)
    // Offset: 0x1485A70
    bool EndInvoke(::System::IAsyncResult* result);
  }; // LevelMissionParser/ParserFunction
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LevelMissionParser::ParserFunction::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::LevelMissionParser::ParserFunction::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::LevelMissionParser::ParserFunction::*)(::ArrayW<float>, int)>(&GlobalNamespace::LevelMissionParser::ParserFunction::Invoke)> {
  static const MethodInfo* get() {
    static auto* functionParams = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    static auto* paramCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelMissionParser::ParserFunction*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{functionParams, paramCount});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelMissionParser::ParserFunction::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (GlobalNamespace::LevelMissionParser::ParserFunction::*)(::ArrayW<float>, int, ::System::AsyncCallback*, ::Il2CppObject*)>(&GlobalNamespace::LevelMissionParser::ParserFunction::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* functionParams = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    static auto* paramCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelMissionParser::ParserFunction*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{functionParams, paramCount, callback, object});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelMissionParser::ParserFunction::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::LevelMissionParser::ParserFunction::*)(::System::IAsyncResult*)>(&GlobalNamespace::LevelMissionParser::ParserFunction::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelMissionParser::ParserFunction*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
