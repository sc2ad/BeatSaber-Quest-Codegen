// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Globalization.TimeSpanParse
#include "System/Globalization/TimeSpanParse.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::TimeSpanParse::TimeSpanTokenizer, "System.Globalization", "TimeSpanParse/TimeSpanTokenizer");
// Type namespace: System.Globalization
namespace System::Globalization {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Globalization.TimeSpanParse/System.Globalization.TimeSpanTokenizer
  // [TokenAttribute] Offset: FFFFFFFF
  struct TimeSpanParse::TimeSpanTokenizer/*, public ::System::ValueType*/ {
    public:
    public:
    // private System.Int32 m_pos
    // Size: 0x4
    // Offset: 0x0
    int m_pos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: m_pos and: m_value
    char __padding0[0x4] = {};
    // private System.String m_value
    // Size: 0x8
    // Offset: 0x8
    ::StringW m_value;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating value type constructor for type: TimeSpanTokenizer
    constexpr TimeSpanTokenizer(int m_pos_ = {}, ::StringW m_value_ = {}) noexcept : m_pos{m_pos_}, m_value{m_value_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private System.Int32 m_pos
    [[deprecated("Use field access instead!")]] int& dyn_m_pos();
    // Get instance field reference: private System.String m_value
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_value();
    // System.Boolean get_EOL()
    // Offset: 0x2050038
    bool get_EOL();
    // System.Char get_NextChar()
    // Offset: 0x2050028
    ::Il2CppChar get_NextChar();
    // System.Char get_CurrentChar()
    // Offset: 0x204FFF0
    ::Il2CppChar get_CurrentChar();
    // System.Void Init(System.String input)
    // Offset: 0x204FEA0
    void Init(::StringW input);
    // System.Void Init(System.String input, System.Int32 startPosition)
    // Offset: 0x204FEAC
    void Init(::StringW input, int startPosition);
    // System.Globalization.TimeSpanParse/System.Globalization.TimeSpanToken GetNextToken()
    // Offset: 0x204FEB8
    ::System::Globalization::TimeSpanParse::TimeSpanToken GetNextToken();
  }; // System.Globalization.TimeSpanParse/System.Globalization.TimeSpanTokenizer
  #pragma pack(pop)
  static check_size<sizeof(TimeSpanParse::TimeSpanTokenizer), 8 + sizeof(::StringW)> __System_Globalization_TimeSpanParse_TimeSpanTokenizerSizeCheck;
  static_assert(sizeof(TimeSpanParse::TimeSpanTokenizer) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Globalization::TimeSpanParse::TimeSpanTokenizer::get_EOL
// Il2CppName: get_EOL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Globalization::TimeSpanParse::TimeSpanTokenizer::*)()>(&System::Globalization::TimeSpanParse::TimeSpanTokenizer::get_EOL)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TimeSpanParse::TimeSpanTokenizer), "get_EOL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::TimeSpanParse::TimeSpanTokenizer::get_NextChar
// Il2CppName: get_NextChar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppChar (System::Globalization::TimeSpanParse::TimeSpanTokenizer::*)()>(&System::Globalization::TimeSpanParse::TimeSpanTokenizer::get_NextChar)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TimeSpanParse::TimeSpanTokenizer), "get_NextChar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::TimeSpanParse::TimeSpanTokenizer::get_CurrentChar
// Il2CppName: get_CurrentChar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppChar (System::Globalization::TimeSpanParse::TimeSpanTokenizer::*)()>(&System::Globalization::TimeSpanParse::TimeSpanTokenizer::get_CurrentChar)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TimeSpanParse::TimeSpanTokenizer), "get_CurrentChar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::TimeSpanParse::TimeSpanTokenizer::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Globalization::TimeSpanParse::TimeSpanTokenizer::*)(::StringW)>(&System::Globalization::TimeSpanParse::TimeSpanTokenizer::Init)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TimeSpanParse::TimeSpanTokenizer), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input});
  }
};
// Writing MetadataGetter for method: System::Globalization::TimeSpanParse::TimeSpanTokenizer::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Globalization::TimeSpanParse::TimeSpanTokenizer::*)(::StringW, int)>(&System::Globalization::TimeSpanParse::TimeSpanTokenizer::Init)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* startPosition = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TimeSpanParse::TimeSpanTokenizer), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, startPosition});
  }
};
// Writing MetadataGetter for method: System::Globalization::TimeSpanParse::TimeSpanTokenizer::GetNextToken
// Il2CppName: GetNextToken
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::TimeSpanParse::TimeSpanToken (System::Globalization::TimeSpanParse::TimeSpanTokenizer::*)()>(&System::Globalization::TimeSpanParse::TimeSpanTokenizer::GetNextToken)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TimeSpanParse::TimeSpanTokenizer), "GetNextToken", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
