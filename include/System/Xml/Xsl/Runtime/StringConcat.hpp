// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: System.Xml.Xsl.Runtime
namespace System::Xml::Xsl::Runtime {
  // Forward declaring type: StringConcat
  struct StringConcat;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Xsl::Runtime::StringConcat, "System.Xml.Xsl.Runtime", "StringConcat");
// Type namespace: System.Xml.Xsl.Runtime
namespace System::Xml::Xsl::Runtime {
  // Size: 0x34
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Xml.Xsl.Runtime.StringConcat
  // [TokenAttribute] Offset: FFFFFFFF
  // [EditorBrowsableAttribute] Offset: 1062D2C
  struct StringConcat/*, public ::System::ValueType*/ {
    public:
    public:
    // private System.String s1
    // Size: 0x8
    // Offset: 0x0
    ::StringW s1;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String s2
    // Size: 0x8
    // Offset: 0x8
    ::StringW s2;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String s3
    // Size: 0x8
    // Offset: 0x10
    ::StringW s3;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String s4
    // Size: 0x8
    // Offset: 0x18
    ::StringW s4;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String delimiter
    // Size: 0x8
    // Offset: 0x20
    ::StringW delimiter;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Collections.Generic.List`1<System.String> strList
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::List_1<::StringW>* strList;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::StringW>*) == 0x8);
    // private System.Int32 idxStr
    // Size: 0x4
    // Offset: 0x30
    int idxStr;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: StringConcat
    constexpr StringConcat(::StringW s1_ = {}, ::StringW s2_ = {}, ::StringW s3_ = {}, ::StringW s4_ = {}, ::StringW delimiter_ = {}, ::System::Collections::Generic::List_1<::StringW>* strList_ = {}, int idxStr_ = {}) noexcept : s1{s1_}, s2{s2_}, s3{s3_}, s4{s4_}, delimiter{delimiter_}, strList{strList_}, idxStr{idxStr_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private System.String s1
    [[deprecated("Use field access instead!")]] ::StringW& dyn_s1();
    // Get instance field reference: private System.String s2
    [[deprecated("Use field access instead!")]] ::StringW& dyn_s2();
    // Get instance field reference: private System.String s3
    [[deprecated("Use field access instead!")]] ::StringW& dyn_s3();
    // Get instance field reference: private System.String s4
    [[deprecated("Use field access instead!")]] ::StringW& dyn_s4();
    // Get instance field reference: private System.String delimiter
    [[deprecated("Use field access instead!")]] ::StringW& dyn_delimiter();
    // Get instance field reference: private System.Collections.Generic.List`1<System.String> strList
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::StringW>*& dyn_strList();
    // Get instance field reference: private System.Int32 idxStr
    [[deprecated("Use field access instead!")]] int& dyn_idxStr();
    // System.Int32 get_Count()
    // Offset: 0x27B76D4
    int get_Count();
    // public System.Void Clear()
    // Offset: 0x27B76C8
    void Clear();
    // public System.String GetResult()
    // Offset: 0x27B76DC
    ::StringW GetResult();
    // System.Void ConcatNoDelimiter(System.String s)
    // Offset: 0x27B77C8
    void ConcatNoDelimiter(::StringW s);
  }; // System.Xml.Xsl.Runtime.StringConcat
  #pragma pack(pop)
  static check_size<sizeof(StringConcat), 48 + sizeof(int)> __System_Xml_Xsl_Runtime_StringConcatSizeCheck;
  static_assert(sizeof(StringConcat) == 0x34);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Xsl::Runtime::StringConcat::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::Xsl::Runtime::StringConcat::*)()>(&System::Xml::Xsl::Runtime::StringConcat::get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Xsl::Runtime::StringConcat), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Xsl::Runtime::StringConcat::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Xsl::Runtime::StringConcat::*)()>(&System::Xml::Xsl::Runtime::StringConcat::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Xsl::Runtime::StringConcat), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Xsl::Runtime::StringConcat::GetResult
// Il2CppName: GetResult
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Xsl::Runtime::StringConcat::*)()>(&System::Xml::Xsl::Runtime::StringConcat::GetResult)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Xsl::Runtime::StringConcat), "GetResult", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Xsl::Runtime::StringConcat::ConcatNoDelimiter
// Il2CppName: ConcatNoDelimiter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Xsl::Runtime::StringConcat::*)(::StringW)>(&System::Xml::Xsl::Runtime::StringConcat::ConcatNoDelimiter)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Xsl::Runtime::StringConcat), "ConcatNoDelimiter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
