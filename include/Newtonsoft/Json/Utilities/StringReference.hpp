// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Newtonsoft.Json.Utilities
namespace Newtonsoft::Json::Utilities {
  // Forward declaring type: StringReference
  struct StringReference;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::StringReference, "Newtonsoft.Json.Utilities", "StringReference");
// Type namespace: Newtonsoft.Json.Utilities
namespace Newtonsoft::Json::Utilities {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Newtonsoft.Json.Utilities.StringReference
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: 10EE0FC
  // [DefaultMemberAttribute] Offset: 10EE0FC
  struct StringReference/*, public ::System::ValueType*/ {
    public:
    public:
    // private readonly System.Char[] _chars
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<::Il2CppChar> chars;
    // Field size check
    static_assert(sizeof(::ArrayW<::Il2CppChar>) == 0x8);
    // private readonly System.Int32 _startIndex
    // Size: 0x4
    // Offset: 0x8
    int startIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private readonly System.Int32 _length
    // Size: 0x4
    // Offset: 0xC
    int length;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: StringReference
    constexpr StringReference(::ArrayW<::Il2CppChar> chars_ = ::ArrayW<::Il2CppChar>(static_cast<void*>(nullptr)), int startIndex_ = {}, int length_ = {}) noexcept : chars{chars_}, startIndex{startIndex_}, length{length_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private readonly System.Char[] _chars
    [[deprecated("Use field access instead!")]] ::ArrayW<::Il2CppChar>& dyn__chars();
    // Get instance field reference: private readonly System.Int32 _startIndex
    [[deprecated("Use field access instead!")]] int& dyn__startIndex();
    // Get instance field reference: private readonly System.Int32 _length
    [[deprecated("Use field access instead!")]] int& dyn__length();
    // public System.Char get_Item(System.Int32 i)
    // Offset: 0x211F70C
    ::Il2CppChar get_Item(int i);
    // public System.Char[] get_Chars()
    // Offset: 0x212899C
    ::ArrayW<::Il2CppChar> get_Chars();
    // public System.Int32 get_StartIndex()
    // Offset: 0x21289A4
    int get_StartIndex();
    // public System.Int32 get_Length()
    // Offset: 0x21289AC
    int get_Length();
    // public System.Void .ctor(System.Char[] chars, System.Int32 startIndex, System.Int32 length)
    // Offset: 0x211FE0C
    // ABORTED: conflicts with another method.  StringReference(::ArrayW<::Il2CppChar> chars, int startIndex, int length);
    // public override System.String ToString()
    // Offset: 0x211FA50
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // Newtonsoft.Json.Utilities.StringReference
  #pragma pack(pop)
  static check_size<sizeof(StringReference), 12 + sizeof(int)> __Newtonsoft_Json_Utilities_StringReferenceSizeCheck;
  static_assert(sizeof(StringReference) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::StringReference::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppChar (Newtonsoft::Json::Utilities::StringReference::*)(int)>(&Newtonsoft::Json::Utilities::StringReference::get_Item)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::StringReference), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::StringReference::get_Chars
// Il2CppName: get_Chars
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Il2CppChar> (Newtonsoft::Json::Utilities::StringReference::*)()>(&Newtonsoft::Json::Utilities::StringReference::get_Chars)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::StringReference), "get_Chars", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::StringReference::get_StartIndex
// Il2CppName: get_StartIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Newtonsoft::Json::Utilities::StringReference::*)()>(&Newtonsoft::Json::Utilities::StringReference::get_StartIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::StringReference), "get_StartIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::StringReference::get_Length
// Il2CppName: get_Length
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Newtonsoft::Json::Utilities::StringReference::*)()>(&Newtonsoft::Json::Utilities::StringReference::get_Length)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::StringReference), "get_Length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::StringReference::StringReference
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::StringReference::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Newtonsoft::Json::Utilities::StringReference::*)()>(&Newtonsoft::Json::Utilities::StringReference::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::StringReference), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
