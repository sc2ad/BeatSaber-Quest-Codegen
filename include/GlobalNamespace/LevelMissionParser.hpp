// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: LevelMissionParser
  class LevelMissionParser;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LevelMissionParser);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelMissionParser*, "", "LevelMissionParser");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: LevelMissionParser
  // [TokenAttribute] Offset: FFFFFFFF
  class LevelMissionParser : public ::Il2CppObject {
    public:
    // Nested type: ::GlobalNamespace::LevelMissionParser::ParserFunction
    class ParserFunction;
    public:
    // private System.Collections.Generic.Dictionary`2<System.String,LevelMissionParser/ParserFunction> _functions
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::LevelMissionParser::ParserFunction*>* functions;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::LevelMissionParser::ParserFunction*>*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::LevelMissionParser::ParserFunction*>*
    constexpr operator ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::LevelMissionParser::ParserFunction*>*() const noexcept {
      return functions;
    }
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.String,LevelMissionParser/ParserFunction> _functions
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::LevelMissionParser::ParserFunction*>*& dyn__functions();
    // public System.Void .ctor()
    // Offset: 0x150A5C8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LevelMissionParser* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LevelMissionParser::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LevelMissionParser*, creationType>()));
    }
    // public System.Void AddFunction(System.String name, LevelMissionParser/ParserFunction function)
    // Offset: 0x150A640
    void AddFunction(::StringW name, ::GlobalNamespace::LevelMissionParser::ParserFunction* function);
    // public System.Boolean Parse(System.String s)
    // Offset: 0x150A6B0
    bool Parse(::StringW s);
    // private System.Boolean Parse(System.String s, System.Int32 start, System.Int32 length)
    // Offset: 0x150A6CC
    bool Parse(::StringW s, int start, int length);
    // private System.Boolean ParseFunction(System.String s, System.Int32 start, System.Int32 length)
    // Offset: 0x150A9A8
    bool ParseFunction(::StringW s, int start, int length);
  }; // LevelMissionParser
  #pragma pack(pop)
  static check_size<sizeof(LevelMissionParser), 16 + sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::LevelMissionParser::ParserFunction*>*)> __GlobalNamespace_LevelMissionParserSizeCheck;
  static_assert(sizeof(LevelMissionParser) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LevelMissionParser::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::LevelMissionParser::AddFunction
// Il2CppName: AddFunction
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelMissionParser::*)(::StringW, ::GlobalNamespace::LevelMissionParser::ParserFunction*)>(&GlobalNamespace::LevelMissionParser::AddFunction)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* function = &::il2cpp_utils::GetClassFromName("", "LevelMissionParser/ParserFunction")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelMissionParser*), "AddFunction", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, function});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelMissionParser::Parse
// Il2CppName: Parse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::LevelMissionParser::*)(::StringW)>(&GlobalNamespace::LevelMissionParser::Parse)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelMissionParser*), "Parse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelMissionParser::Parse
// Il2CppName: Parse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::LevelMissionParser::*)(::StringW, int, int)>(&GlobalNamespace::LevelMissionParser::Parse)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelMissionParser*), "Parse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, start, length});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelMissionParser::ParseFunction
// Il2CppName: ParseFunction
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::LevelMissionParser::*)(::StringW, int, int)>(&GlobalNamespace::LevelMissionParser::ParseFunction)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelMissionParser*), "ParseFunction", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, start, length});
  }
};
