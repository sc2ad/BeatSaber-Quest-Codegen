// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.ParameterizedStrings
  // [TokenAttribute] Offset: FFFFFFFF
  class ParameterizedStrings : public ::Il2CppObject {
    public:
    // Nested type: System::ParameterizedStrings::FormatParam
    struct FormatParam;
    // Nested type: System::ParameterizedStrings::LowLevelStack
    class LowLevelStack;
    // Size: 0x10
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: System.ParameterizedStrings/System.FormatParam
    // [TokenAttribute] Offset: FFFFFFFF
    struct FormatParam/*, public System::ValueType*/ {
      public:
      // private readonly System.Int32 _int32
      // Size: 0x4
      // Offset: 0x0
      int int32;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Padding between fields: int32 and: string
      char __padding0[0x4] = {};
      // private readonly System.String _string
      // Size: 0x8
      // Offset: 0x8
      ::Il2CppString* string;
      // Field size check
      static_assert(sizeof(::Il2CppString*) == 0x8);
      // Creating value type constructor for type: FormatParam
      constexpr FormatParam(int int32_ = {}, ::Il2CppString* string_ = {}) noexcept : int32{int32_}, string{string_} {}
      // Creating interface conversion operator: operator System::ValueType
      operator System::ValueType() noexcept {
        return *reinterpret_cast<System::ValueType*>(this);
      }
      // Get instance field reference: private readonly System.Int32 _int32
      int& dyn__int32();
      // Get instance field reference: private readonly System.String _string
      ::Il2CppString*& dyn__string();
      // public System.Int32 get_Int32()
      // Offset: 0x1E9F49C
      int get_Int32();
      // public System.String get_String()
      // Offset: 0x1E9ECF8
      ::Il2CppString* get_String();
      // public System.Object get_Object()
      // Offset: 0x1E9ED54
      ::Il2CppObject* get_Object();
      // public System.Void .ctor(System.Int32 value)
      // Offset: 0x1E9F484
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      FormatParam(int value) {
        static auto ___internal__logger = ::Logger::get().WithContext("System::ParameterizedStrings::FormatParam::.ctor");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
        ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, value);
      }
      // private System.Void .ctor(System.Int32 intValue, System.String stringValue)
      // Offset: 0x1E9F490
      // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      // ABORTED: conflicts with another method.  FormatParam(int intValue, ::Il2CppString* stringValue)
    }; // System.ParameterizedStrings/System.FormatParam
    #pragma pack(pop)
    static check_size<sizeof(ParameterizedStrings::FormatParam), 8 + sizeof(::Il2CppString*)> __System_ParameterizedStrings_FormatParamSizeCheck;
    static_assert(sizeof(ParameterizedStrings::FormatParam) == 0x10);
    // Creating value type constructor for type: ParameterizedStrings
    ParameterizedStrings() noexcept {}
    // Get static field: static private System.ParameterizedStrings/System.LowLevelStack _cachedStack
    static System::ParameterizedStrings::LowLevelStack* _get__cachedStack();
    // Set static field: static private System.ParameterizedStrings/System.LowLevelStack _cachedStack
    static void _set__cachedStack(System::ParameterizedStrings::LowLevelStack* value);
    // static public System.String Evaluate(System.String format, params System.ParameterizedStrings/System.FormatParam[] args)
    // Offset: 0x1E9E1CC
    static ::Il2CppString* Evaluate(::Il2CppString* format, ::ArrayWrapper<System::ParameterizedStrings::FormatParam> args);
    // Creating initializer_list -> params proxy for: System.String Evaluate(System.String format, params System.ParameterizedStrings/System.FormatParam[] args)
    static ::Il2CppString* Evaluate(::Il2CppString* format, std::initializer_list<System::ParameterizedStrings::FormatParam> args);
    // Creating TArgs -> initializer_list proxy for: System.String Evaluate(System.String format, params System.ParameterizedStrings/System.FormatParam[] args)
    template<class ...TParams>
    static ::Il2CppString* Evaluate(::Il2CppString* format, TParams&&... args) {
      return Evaluate(format, {args...});
    }
    // static private System.String EvaluateInternal(System.String format, ref System.Int32 pos, System.ParameterizedStrings/System.FormatParam[] args, System.ParameterizedStrings/System.LowLevelStack stack, ref System.ParameterizedStrings/System.FormatParam[] dynamicVars, ref System.ParameterizedStrings/System.FormatParam[] staticVars)
    // Offset: 0x1E9E390
    static ::Il2CppString* EvaluateInternal(::Il2CppString* format, ByRef<int> pos, ::ArrayWrapper<System::ParameterizedStrings::FormatParam> args, System::ParameterizedStrings::LowLevelStack* stack, ByRef<::ArrayWrapper<System::ParameterizedStrings::FormatParam>> dynamicVars, ByRef<::ArrayWrapper<System::ParameterizedStrings::FormatParam>> staticVars);
    // static private System.Boolean AsBool(System.Int32 i)
    // Offset: 0x1E9F1E0
    static bool AsBool(int i);
    // static private System.Int32 AsInt(System.Boolean b)
    // Offset: 0x1E9F1D8
    static int AsInt(bool b);
    // static private System.String StringFromAsciiBytes(System.Byte[] buffer, System.Int32 offset, System.Int32 length)
    // Offset: 0x1E9F1EC
    static ::Il2CppString* StringFromAsciiBytes(::ArrayWrapper<uint8_t> buffer, int offset, int length);
    // static private System.Int32 snprintf(System.Byte* str, System.IntPtr size, System.String format, System.String arg1)
    // Offset: 0x1E9F2E8
    static int snprintf(uint8_t* str, System::IntPtr size, ::Il2CppString* format, ::Il2CppString* arg1);
    // static private System.Int32 snprintf(System.Byte* str, System.IntPtr size, System.String format, System.Int32 arg1)
    // Offset: 0x1E9F3C0
    static int snprintf(uint8_t* str, System::IntPtr size, ::Il2CppString* format, int arg1);
    // static private System.String FormatPrintF(System.String format, System.Object arg)
    // Offset: 0x1E9EDC0
    static ::Il2CppString* FormatPrintF(::Il2CppString* format, ::Il2CppObject* arg);
    // static private System.ParameterizedStrings/System.FormatParam[] GetDynamicOrStaticVariables(System.Char c, ref System.ParameterizedStrings/System.FormatParam[] dynamicVars, ref System.ParameterizedStrings/System.FormatParam[] staticVars, out System.Int32 index)
    // Offset: 0x1E9F0C8
    static ::ArrayWrapper<System::ParameterizedStrings::FormatParam> GetDynamicOrStaticVariables(::Il2CppChar c, ByRef<::ArrayWrapper<System::ParameterizedStrings::FormatParam>> dynamicVars, ByRef<::ArrayWrapper<System::ParameterizedStrings::FormatParam>> staticVars, ByRef<int> index);
  }; // System.ParameterizedStrings
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::ParameterizedStrings*, "System", "ParameterizedStrings");
DEFINE_IL2CPP_ARG_TYPE(System::ParameterizedStrings::FormatParam, "System", "ParameterizedStrings/FormatParam");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ParameterizedStrings::Evaluate
// Il2CppName: Evaluate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*, ::ArrayWrapper<System::ParameterizedStrings::FormatParam>)>(&System::ParameterizedStrings::Evaluate)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "ParameterizedStrings/FormatParam"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ParameterizedStrings*), "Evaluate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format, args});
  }
};
// Writing MetadataGetter for method: System::ParameterizedStrings::EvaluateInternal
// Il2CppName: EvaluateInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*, ByRef<int>, ::ArrayWrapper<System::ParameterizedStrings::FormatParam>, System::ParameterizedStrings::LowLevelStack*, ByRef<::ArrayWrapper<System::ParameterizedStrings::FormatParam>>, ByRef<::ArrayWrapper<System::ParameterizedStrings::FormatParam>>)>(&System::ParameterizedStrings::EvaluateInternal)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pos = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "ParameterizedStrings/FormatParam"), 1)->byval_arg;
    static auto* stack = &::il2cpp_utils::GetClassFromName("System", "ParameterizedStrings/LowLevelStack")->byval_arg;
    static auto* dynamicVars = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "ParameterizedStrings/FormatParam"), 1)->this_arg;
    static auto* staticVars = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "ParameterizedStrings/FormatParam"), 1)->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ParameterizedStrings*), "EvaluateInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format, pos, args, stack, dynamicVars, staticVars});
  }
};
// Writing MetadataGetter for method: System::ParameterizedStrings::AsBool
// Il2CppName: AsBool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int)>(&System::ParameterizedStrings::AsBool)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ParameterizedStrings*), "AsBool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i});
  }
};
// Writing MetadataGetter for method: System::ParameterizedStrings::AsInt
// Il2CppName: AsInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(bool)>(&System::ParameterizedStrings::AsInt)> {
  static const MethodInfo* get() {
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ParameterizedStrings*), "AsInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{b});
  }
};
// Writing MetadataGetter for method: System::ParameterizedStrings::StringFromAsciiBytes
// Il2CppName: StringFromAsciiBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::ArrayWrapper<uint8_t>, int, int)>(&System::ParameterizedStrings::StringFromAsciiBytes)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ParameterizedStrings*), "StringFromAsciiBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, length});
  }
};
// Writing MetadataGetter for method: System::ParameterizedStrings::snprintf
// Il2CppName: snprintf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(uint8_t*, System::IntPtr, ::Il2CppString*, ::Il2CppString*)>(&System::ParameterizedStrings::snprintf)> {
  static const MethodInfo* get() {
    static auto* str = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* arg1 = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ParameterizedStrings*), "snprintf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str, size, format, arg1});
  }
};
// Writing MetadataGetter for method: System::ParameterizedStrings::snprintf
// Il2CppName: snprintf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(uint8_t*, System::IntPtr, ::Il2CppString*, int)>(&System::ParameterizedStrings::snprintf)> {
  static const MethodInfo* get() {
    static auto* str = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* arg1 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ParameterizedStrings*), "snprintf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str, size, format, arg1});
  }
};
// Writing MetadataGetter for method: System::ParameterizedStrings::FormatPrintF
// Il2CppName: FormatPrintF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*, ::Il2CppObject*)>(&System::ParameterizedStrings::FormatPrintF)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* arg = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ParameterizedStrings*), "FormatPrintF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format, arg});
  }
};
// Writing MetadataGetter for method: System::ParameterizedStrings::GetDynamicOrStaticVariables
// Il2CppName: GetDynamicOrStaticVariables
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayWrapper<System::ParameterizedStrings::FormatParam> (*)(::Il2CppChar, ByRef<::ArrayWrapper<System::ParameterizedStrings::FormatParam>>, ByRef<::ArrayWrapper<System::ParameterizedStrings::FormatParam>>, ByRef<int>)>(&System::ParameterizedStrings::GetDynamicOrStaticVariables)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    static auto* dynamicVars = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "ParameterizedStrings/FormatParam"), 1)->this_arg;
    static auto* staticVars = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "ParameterizedStrings/FormatParam"), 1)->this_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ParameterizedStrings*), "GetDynamicOrStaticVariables", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c, dynamicVars, staticVars, index});
  }
};
