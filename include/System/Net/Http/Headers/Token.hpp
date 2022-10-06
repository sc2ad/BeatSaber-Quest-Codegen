// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::Http::Headers
namespace System::Net::Http::Headers {
  // Skipping declaration: Type because it is already included!
}
// Completed forward declares
// Type namespace: System.Net.Http.Headers
namespace System::Net::Http::Headers {
  // Forward declaring type: Token
  struct Token;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::Token, "System.Net.Http.Headers", "Token");
// Type namespace: System.Net.Http.Headers
namespace System::Net::Http::Headers {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Net.Http.Headers.Token
  // [TokenAttribute] Offset: FFFFFFFF
  struct Token/*, public ::System::ValueType*/ {
    public:
    // Nested type: ::System::Net::Http::Headers::Token::Type
    struct Type;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: System.Net.Http.Headers.Token/System.Net.Http.Headers.Type
    // [TokenAttribute] Offset: FFFFFFFF
    struct Type/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: Type
      constexpr Type(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating interface conversion operator: i_Enum
      inline ::System::Enum* i_Enum() noexcept {
        return reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public System.Net.Http.Headers.Token/System.Net.Http.Headers.Type Error
      static constexpr const int Error = 0;
      // Get static field: static public System.Net.Http.Headers.Token/System.Net.Http.Headers.Type Error
      static ::System::Net::Http::Headers::Token::Type _get_Error();
      // Set static field: static public System.Net.Http.Headers.Token/System.Net.Http.Headers.Type Error
      static void _set_Error(::System::Net::Http::Headers::Token::Type value);
      // static field const value: static public System.Net.Http.Headers.Token/System.Net.Http.Headers.Type End
      static constexpr const int End = 1;
      // Get static field: static public System.Net.Http.Headers.Token/System.Net.Http.Headers.Type End
      static ::System::Net::Http::Headers::Token::Type _get_End();
      // Set static field: static public System.Net.Http.Headers.Token/System.Net.Http.Headers.Type End
      static void _set_End(::System::Net::Http::Headers::Token::Type value);
      // static field const value: static public System.Net.Http.Headers.Token/System.Net.Http.Headers.Type Token
      static constexpr const int Token = 2;
      // Get static field: static public System.Net.Http.Headers.Token/System.Net.Http.Headers.Type Token
      static ::System::Net::Http::Headers::Token::Type _get_Token();
      // Set static field: static public System.Net.Http.Headers.Token/System.Net.Http.Headers.Type Token
      static void _set_Token(::System::Net::Http::Headers::Token::Type value);
      // static field const value: static public System.Net.Http.Headers.Token/System.Net.Http.Headers.Type QuotedString
      static constexpr const int QuotedString = 3;
      // Get static field: static public System.Net.Http.Headers.Token/System.Net.Http.Headers.Type QuotedString
      static ::System::Net::Http::Headers::Token::Type _get_QuotedString();
      // Set static field: static public System.Net.Http.Headers.Token/System.Net.Http.Headers.Type QuotedString
      static void _set_QuotedString(::System::Net::Http::Headers::Token::Type value);
      // static field const value: static public System.Net.Http.Headers.Token/System.Net.Http.Headers.Type SeparatorEqual
      static constexpr const int SeparatorEqual = 4;
      // Get static field: static public System.Net.Http.Headers.Token/System.Net.Http.Headers.Type SeparatorEqual
      static ::System::Net::Http::Headers::Token::Type _get_SeparatorEqual();
      // Set static field: static public System.Net.Http.Headers.Token/System.Net.Http.Headers.Type SeparatorEqual
      static void _set_SeparatorEqual(::System::Net::Http::Headers::Token::Type value);
      // static field const value: static public System.Net.Http.Headers.Token/System.Net.Http.Headers.Type SeparatorSemicolon
      static constexpr const int SeparatorSemicolon = 5;
      // Get static field: static public System.Net.Http.Headers.Token/System.Net.Http.Headers.Type SeparatorSemicolon
      static ::System::Net::Http::Headers::Token::Type _get_SeparatorSemicolon();
      // Set static field: static public System.Net.Http.Headers.Token/System.Net.Http.Headers.Type SeparatorSemicolon
      static void _set_SeparatorSemicolon(::System::Net::Http::Headers::Token::Type value);
      // static field const value: static public System.Net.Http.Headers.Token/System.Net.Http.Headers.Type SeparatorSlash
      static constexpr const int SeparatorSlash = 6;
      // Get static field: static public System.Net.Http.Headers.Token/System.Net.Http.Headers.Type SeparatorSlash
      static ::System::Net::Http::Headers::Token::Type _get_SeparatorSlash();
      // Set static field: static public System.Net.Http.Headers.Token/System.Net.Http.Headers.Type SeparatorSlash
      static void _set_SeparatorSlash(::System::Net::Http::Headers::Token::Type value);
      // static field const value: static public System.Net.Http.Headers.Token/System.Net.Http.Headers.Type SeparatorDash
      static constexpr const int SeparatorDash = 7;
      // Get static field: static public System.Net.Http.Headers.Token/System.Net.Http.Headers.Type SeparatorDash
      static ::System::Net::Http::Headers::Token::Type _get_SeparatorDash();
      // Set static field: static public System.Net.Http.Headers.Token/System.Net.Http.Headers.Type SeparatorDash
      static void _set_SeparatorDash(::System::Net::Http::Headers::Token::Type value);
      // static field const value: static public System.Net.Http.Headers.Token/System.Net.Http.Headers.Type SeparatorComma
      static constexpr const int SeparatorComma = 8;
      // Get static field: static public System.Net.Http.Headers.Token/System.Net.Http.Headers.Type SeparatorComma
      static ::System::Net::Http::Headers::Token::Type _get_SeparatorComma();
      // Set static field: static public System.Net.Http.Headers.Token/System.Net.Http.Headers.Type SeparatorComma
      static void _set_SeparatorComma(::System::Net::Http::Headers::Token::Type value);
      // static field const value: static public System.Net.Http.Headers.Token/System.Net.Http.Headers.Type OpenParens
      static constexpr const int OpenParens = 9;
      // Get static field: static public System.Net.Http.Headers.Token/System.Net.Http.Headers.Type OpenParens
      static ::System::Net::Http::Headers::Token::Type _get_OpenParens();
      // Set static field: static public System.Net.Http.Headers.Token/System.Net.Http.Headers.Type OpenParens
      static void _set_OpenParens(::System::Net::Http::Headers::Token::Type value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // System.Net.Http.Headers.Token/System.Net.Http.Headers.Type
    #pragma pack(pop)
    static check_size<sizeof(Token::Type), 0 + sizeof(int)> __System_Net_Http_Headers_Token_TypeSizeCheck;
    static_assert(sizeof(Token::Type) == 0x4);
    public:
    // private readonly System.Net.Http.Headers.Token/System.Net.Http.Headers.Type type
    // Size: 0x4
    // Offset: 0x0
    ::System::Net::Http::Headers::Token::Type type;
    // Field size check
    static_assert(sizeof(::System::Net::Http::Headers::Token::Type) == 0x4);
    // private System.Int32 <StartPosition>k__BackingField
    // Size: 0x4
    // Offset: 0x4
    int StartPosition;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <EndPosition>k__BackingField
    // Size: 0x4
    // Offset: 0x8
    int EndPosition;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: Token
    constexpr Token(::System::Net::Http::Headers::Token::Type type_ = {}, int StartPosition_ = {}, int EndPosition_ = {}) noexcept : type{type_}, StartPosition{StartPosition_}, EndPosition{EndPosition_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Get static field: static public readonly System.Net.Http.Headers.Token Empty
    static ::System::Net::Http::Headers::Token _get_Empty();
    // Set static field: static public readonly System.Net.Http.Headers.Token Empty
    static void _set_Empty(::System::Net::Http::Headers::Token value);
    // Get instance field reference: private readonly System.Net.Http.Headers.Token/System.Net.Http.Headers.Type type
    [[deprecated("Use field access instead!")]] ::System::Net::Http::Headers::Token::Type& dyn_type();
    // Get instance field reference: private System.Int32 <StartPosition>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$StartPosition$k__BackingField();
    // Get instance field reference: private System.Int32 <EndPosition>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$EndPosition$k__BackingField();
    // public System.Int32 get_StartPosition()
    // Offset: 0x19AA9DC
    int get_StartPosition();
    // private System.Void set_StartPosition(System.Int32 value)
    // Offset: 0x19AA9E4
    void set_StartPosition(int value);
    // public System.Int32 get_EndPosition()
    // Offset: 0x19AA9EC
    int get_EndPosition();
    // private System.Void set_EndPosition(System.Int32 value)
    // Offset: 0x19AA9F4
    void set_EndPosition(int value);
    // public System.Net.Http.Headers.Token/System.Net.Http.Headers.Type get_Kind()
    // Offset: 0x19AA9FC
    ::System::Net::Http::Headers::Token::Type get_Kind();
    // public System.Void .ctor(System.Net.Http.Headers.Token/System.Net.Http.Headers.Type type, System.Int32 startPosition, System.Int32 endPosition)
    // Offset: 0x199D8F4
    // ABORTED: conflicts with another method.  Token(::System::Net::Http::Headers::Token::Type type, int startPosition, int endPosition);
    // static private System.Void .cctor()
    // Offset: 0x19AAA94
    static void _cctor();
    // public override System.String ToString()
    // Offset: 0x19AAA08
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // System.Net.Http.Headers.Token
  #pragma pack(pop)
  static check_size<sizeof(Token), 8 + sizeof(int)> __System_Net_Http_Headers_TokenSizeCheck;
  static_assert(sizeof(Token) == 0xC);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::Token::Type, "System.Net.Http.Headers", "Token/Type");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Http::Headers::Token::get_StartPosition
// Il2CppName: get_StartPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::Http::Headers::Token::*)()>(&System::Net::Http::Headers::Token::get_StartPosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::Token), "get_StartPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::Token::set_StartPosition
// Il2CppName: set_StartPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::Headers::Token::*)(int)>(&System::Net::Http::Headers::Token::set_StartPosition)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::Token), "set_StartPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::Token::get_EndPosition
// Il2CppName: get_EndPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::Http::Headers::Token::*)()>(&System::Net::Http::Headers::Token::get_EndPosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::Token), "get_EndPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::Token::set_EndPosition
// Il2CppName: set_EndPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::Headers::Token::*)(int)>(&System::Net::Http::Headers::Token::set_EndPosition)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::Token), "set_EndPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::Token::get_Kind
// Il2CppName: get_Kind
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Http::Headers::Token::Type (System::Net::Http::Headers::Token::*)()>(&System::Net::Http::Headers::Token::get_Kind)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::Token), "get_Kind", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::Token::Token
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Http::Headers::Token::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Net::Http::Headers::Token::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::Token), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::Token::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::Http::Headers::Token::*)()>(&System::Net::Http::Headers::Token::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::Token), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
