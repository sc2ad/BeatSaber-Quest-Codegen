// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IComparable`1
#include "System/IComparable_1.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.IComparable
#include "System/IComparable.hpp"
// Including type: System.IFormattable
#include "System/IFormattable.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IFormatProvider
  class IFormatProvider;
}
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: RandomNumberGenerator
  class RandomNumberGenerator;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: Guid
  struct Guid;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Guid, "System", "Guid");
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Guid
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 1186E7C
  struct Guid/*, public ::System::ValueType, public ::System::IComparable_1<::System::Guid>, public ::System::IEquatable_1<::System::Guid>, public ::System::IComparable, public ::System::IFormattable*/ {
    public:
    // Nested type: ::System::Guid::GuidStyles
    struct GuidStyles;
    // Nested type: ::System::Guid::GuidParseThrowStyle
    struct GuidParseThrowStyle;
    // Nested type: ::System::Guid::ParseFailureKind
    struct ParseFailureKind;
    // Nested type: ::System::Guid::GuidResult
    struct GuidResult;
    public:
    // private System.Int32 _a
    // Size: 0x4
    // Offset: 0x0
    int a;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int16 _b
    // Size: 0x2
    // Offset: 0x4
    int16_t b;
    // Field size check
    static_assert(sizeof(int16_t) == 0x2);
    // private System.Int16 _c
    // Size: 0x2
    // Offset: 0x6
    int16_t c;
    // Field size check
    static_assert(sizeof(int16_t) == 0x2);
    // private System.Byte _d
    // Size: 0x1
    // Offset: 0x8
    uint8_t d;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // private System.Byte _e
    // Size: 0x1
    // Offset: 0x9
    uint8_t e;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // private System.Byte _f
    // Size: 0x1
    // Offset: 0xA
    uint8_t f;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // private System.Byte _g
    // Size: 0x1
    // Offset: 0xB
    uint8_t g;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // private System.Byte _h
    // Size: 0x1
    // Offset: 0xC
    uint8_t h;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // private System.Byte _i
    // Size: 0x1
    // Offset: 0xD
    uint8_t i;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // private System.Byte _j
    // Size: 0x1
    // Offset: 0xE
    uint8_t j;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // private System.Byte _k
    // Size: 0x1
    // Offset: 0xF
    uint8_t k;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    public:
    // Creating value type constructor for type: Guid
    constexpr Guid(int a_ = {}, int16_t b_ = {}, int16_t c_ = {}, uint8_t d_ = {}, uint8_t e_ = {}, uint8_t f_ = {}, uint8_t g_ = {}, uint8_t h_ = {}, uint8_t i_ = {}, uint8_t j_ = {}, uint8_t k_ = {}) noexcept : a{a_}, b{b_}, c{c_}, d{d_}, e{e_}, f{f_}, g{g_}, h{h_}, i{i_}, j{j_}, k{k_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IComparable_1<::System::Guid>
    operator ::System::IComparable_1<::System::Guid>() noexcept {
      return *reinterpret_cast<::System::IComparable_1<::System::Guid>*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::System::Guid>
    operator ::System::IEquatable_1<::System::Guid>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::System::Guid>*>(this);
    }
    // Creating interface conversion operator: operator ::System::IComparable
    operator ::System::IComparable() noexcept {
      return *reinterpret_cast<::System::IComparable*>(this);
    }
    // Creating interface conversion operator: operator ::System::IFormattable
    operator ::System::IFormattable() noexcept {
      return *reinterpret_cast<::System::IFormattable*>(this);
    }
    // Get static field: static public readonly System.Guid Empty
    static ::System::Guid _get_Empty();
    // Set static field: static public readonly System.Guid Empty
    static void _set_Empty(::System::Guid value);
    // Get static field: static private System.Object _rngAccess
    static ::Il2CppObject* _get__rngAccess();
    // Set static field: static private System.Object _rngAccess
    static void _set__rngAccess(::Il2CppObject* value);
    // Get static field: static private System.Security.Cryptography.RandomNumberGenerator _rng
    static ::System::Security::Cryptography::RandomNumberGenerator* _get__rng();
    // Set static field: static private System.Security.Cryptography.RandomNumberGenerator _rng
    static void _set__rng(::System::Security::Cryptography::RandomNumberGenerator* value);
    // Get static field: static private System.Security.Cryptography.RandomNumberGenerator _fastRng
    static ::System::Security::Cryptography::RandomNumberGenerator* _get__fastRng();
    // Set static field: static private System.Security.Cryptography.RandomNumberGenerator _fastRng
    static void _set__fastRng(::System::Security::Cryptography::RandomNumberGenerator* value);
    // Get instance field reference: private System.Int32 _a
    int& dyn__a();
    // Get instance field reference: private System.Int16 _b
    int16_t& dyn__b();
    // Get instance field reference: private System.Int16 _c
    int16_t& dyn__c();
    // Get instance field reference: private System.Byte _d
    uint8_t& dyn__d();
    // Get instance field reference: private System.Byte _e
    uint8_t& dyn__e();
    // Get instance field reference: private System.Byte _f
    uint8_t& dyn__f();
    // Get instance field reference: private System.Byte _g
    uint8_t& dyn__g();
    // Get instance field reference: private System.Byte _h
    uint8_t& dyn__h();
    // Get instance field reference: private System.Byte _i
    uint8_t& dyn__i();
    // Get instance field reference: private System.Byte _j
    uint8_t& dyn__j();
    // Get instance field reference: private System.Byte _k
    uint8_t& dyn__k();
    // public System.Void .ctor(System.Byte[] b)
    // Offset: 0x1F6EA74
    Guid(::ArrayW<uint8_t> b);
    // public System.Void .ctor(System.Int32 a, System.Int16 b, System.Int16 c, System.Byte[] d)
    // Offset: 0x1F6EC7C
    Guid(int a, int16_t b, int16_t c, ::ArrayW<uint8_t> d);
    // public System.Void .ctor(System.Int32 a, System.Int16 b, System.Int16 c, System.Byte d, System.Byte e, System.Byte f, System.Byte g, System.Byte h, System.Byte i, System.Byte j, System.Byte k)
    // Offset: 0x1F6EE70
    // ABORTED: conflicts with another method.  Guid(int a, int16_t b, int16_t c, uint8_t d, uint8_t e, uint8_t f, uint8_t g, uint8_t h, uint8_t i, uint8_t j, uint8_t k);
    // public System.Void .ctor(System.String g)
    // Offset: 0x1F6EEB0
    Guid(::StringW g);
    // static private System.Void .cctor()
    // Offset: 0x1F71F2C
    static void _cctor();
    // static public System.Guid Parse(System.String input)
    // Offset: 0x1F6F470
    static ::System::Guid Parse(::StringW input);
    // static public System.Boolean TryParse(System.String input, out System.Guid result)
    // Offset: 0x1F6F578
    static bool TryParse(::StringW input, ByRef<::System::Guid> result);
    // static public System.Boolean TryParseExact(System.String input, System.String format, out System.Guid result)
    // Offset: 0x1F6F668
    static bool TryParseExact(::StringW input, ::StringW format, ByRef<::System::Guid> result);
    // static private System.Boolean TryParseGuid(System.String g, System.Guid/System.GuidStyles flags, ref System.Guid/System.GuidResult result)
    // Offset: 0x1F6F054
    static bool TryParseGuid(::StringW g, ::System::Guid::GuidStyles flags, ByRef<::System::Guid::GuidResult> result);
    // static private System.Boolean TryParseGuidWithHexPrefix(System.String guidString, ref System.Guid/System.GuidResult result)
    // Offset: 0x1F6FBDC
    static bool TryParseGuidWithHexPrefix(::StringW guidString, ByRef<::System::Guid::GuidResult> result);
    // static private System.Boolean TryParseGuidWithNoStyle(System.String guidString, ref System.Guid/System.GuidResult result)
    // Offset: 0x1F70160
    static bool TryParseGuidWithNoStyle(::StringW guidString, ByRef<::System::Guid::GuidResult> result);
    // static private System.Boolean TryParseGuidWithDashes(System.String guidString, ref System.Guid/System.GuidResult result)
    // Offset: 0x1F6F868
    static bool TryParseGuidWithDashes(::StringW guidString, ByRef<::System::Guid::GuidResult> result);
    // static private System.Boolean StringToShort(System.String str, System.Int32 requiredLength, System.Int32 flags, out System.Int16 result, ref System.Guid/System.GuidResult parseResult)
    // Offset: 0x1F707FC
    static bool StringToShort(::StringW str, int requiredLength, int flags, ByRef<int16_t> result, ByRef<::System::Guid::GuidResult> parseResult);
    // static private System.Boolean StringToShort(System.String str, System.Int32* parsePos, System.Int32 requiredLength, System.Int32 flags, out System.Int16 result, ref System.Guid/System.GuidResult parseResult)
    // Offset: 0x1F709CC
    static bool StringToShort(::StringW str, int* parsePos, int requiredLength, int flags, ByRef<int16_t> result, ByRef<::System::Guid::GuidResult> parseResult);
    // static private System.Boolean StringToInt(System.String str, System.Int32 requiredLength, System.Int32 flags, out System.Int32 result, ref System.Guid/System.GuidResult parseResult)
    // Offset: 0x1F70764
    static bool StringToInt(::StringW str, int requiredLength, int flags, ByRef<int> result, ByRef<::System::Guid::GuidResult> parseResult);
    // static private System.Boolean StringToInt(System.String str, ref System.Int32 parsePos, System.Int32 requiredLength, System.Int32 flags, out System.Int32 result, ref System.Guid/System.GuidResult parseResult)
    // Offset: 0x1F70928
    static bool StringToInt(::StringW str, ByRef<int> parsePos, int requiredLength, int flags, ByRef<int> result, ByRef<::System::Guid::GuidResult> parseResult);
    // static private System.Boolean StringToInt(System.String str, System.Int32* parsePos, System.Int32 requiredLength, System.Int32 flags, out System.Int32 result, ref System.Guid/System.GuidResult parseResult)
    // Offset: 0x1F70A88
    static bool StringToInt(::StringW str, int* parsePos, int requiredLength, int flags, ByRef<int> result, ByRef<::System::Guid::GuidResult> parseResult);
    // static private System.Boolean StringToLong(System.String str, ref System.Int32 parsePos, System.Int32 flags, out System.Int64 result, ref System.Guid/System.GuidResult parseResult)
    // Offset: 0x1F70894
    static bool StringToLong(::StringW str, ByRef<int> parsePos, int flags, ByRef<int64_t> result, ByRef<::System::Guid::GuidResult> parseResult);
    // static private System.Boolean StringToLong(System.String str, System.Int32* parsePos, System.Int32 flags, out System.Int64 result, ref System.Guid/System.GuidResult parseResult)
    // Offset: 0x1F70CA8
    static bool StringToLong(::StringW str, int* parsePos, int flags, ByRef<int64_t> result, ByRef<::System::Guid::GuidResult> parseResult);
    // static private System.String EatAllWhitespace(System.String str)
    // Offset: 0x1F70530
    static ::StringW EatAllWhitespace(::StringW str);
    // static private System.Boolean IsHexPrefix(System.String str, System.Int32 i)
    // Offset: 0x1F70648
    static bool IsHexPrefix(::StringW str, int i);
    // public System.Byte[] ToByteArray()
    // Offset: 0x1F70E50
    ::ArrayW<uint8_t> ToByteArray();
    // public System.Boolean Equals(System.Guid g)
    // Offset: 0x1F716BC
    bool Equals(::System::Guid g);
    // private System.Int32 GetResult(System.UInt32 me, System.UInt32 them)
    // Offset: 0x1F7176C
    int GetResult(uint me, uint them);
    // public System.Int32 CompareTo(System.Object value)
    // Offset: 0x1F7177C
    int CompareTo(::Il2CppObject* value);
    // public System.Int32 CompareTo(System.Guid value)
    // Offset: 0x1F71908
    int CompareTo(::System::Guid value);
    // public System.String ToString(System.String format)
    // Offset: 0x1F71B58
    ::StringW ToString(::StringW format);
    // static private System.Char HexToChar(System.Int32 a)
    // Offset: 0x1F71B5C
    static ::Il2CppChar HexToChar(int a);
    // static private System.Int32 HexsToChars(System.Char* guidChars, System.Int32 offset, System.Int32 a, System.Int32 b)
    // Offset: 0x1F71B78
    static int HexsToChars(::Il2CppChar* guidChars, int offset, int a, int b);
    // static private System.Int32 HexsToChars(System.Char* guidChars, System.Int32 offset, System.Int32 a, System.Int32 b, System.Boolean hex)
    // Offset: 0x1F71C08
    static int HexsToChars(::Il2CppChar* guidChars, int offset, int a, int b, bool hex);
    // public System.String ToString(System.String format, System.IFormatProvider provider)
    // Offset: 0x1F7100C
    ::StringW ToString(::StringW format, ::System::IFormatProvider* provider);
    // static public System.Guid NewGuid()
    // Offset: 0x1F71D6C
    static ::System::Guid NewGuid();
    // public override System.String ToString()
    // Offset: 0x1F70FBC
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
    // public override System.Int32 GetHashCode()
    // Offset: 0x1F7156C
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object o)
    // Offset: 0x1F71594
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object o)
    bool Equals(::Il2CppObject* o);
  }; // System.Guid
  #pragma pack(pop)
  static check_size<sizeof(Guid), 15 + sizeof(uint8_t)> __System_GuidSizeCheck;
  static_assert(sizeof(Guid) == 0x10);
  // static public System.Boolean op_Equality(System.Guid a, System.Guid b)
  // Offset: 0x1F71A14
  bool operator ==(const ::System::Guid& a, const ::System::Guid& b);
  // static public System.Boolean op_Inequality(System.Guid a, System.Guid b)
  // Offset: 0x1F71AC0
  bool operator !=(const ::System::Guid& a, const ::System::Guid& b);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Guid::Guid
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Guid::Guid
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Guid::Guid
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Guid::Guid
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Guid::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Guid::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Guid), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Guid::Parse
// Il2CppName: Parse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Guid (*)(::StringW)>(&System::Guid::Parse)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Guid), "Parse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input});
  }
};
// Writing MetadataGetter for method: System::Guid::TryParse
// Il2CppName: TryParse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<::System::Guid>)>(&System::Guid::TryParse)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "Guid")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Guid), "TryParse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, result});
  }
};
// Writing MetadataGetter for method: System::Guid::TryParseExact
// Il2CppName: TryParseExact
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::StringW, ByRef<::System::Guid>)>(&System::Guid::TryParseExact)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "Guid")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Guid), "TryParseExact", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, format, result});
  }
};
// Writing MetadataGetter for method: System::Guid::TryParseGuid
// Il2CppName: TryParseGuid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::System::Guid::GuidStyles, ByRef<::System::Guid::GuidResult>)>(&System::Guid::TryParseGuid)> {
  static const MethodInfo* get() {
    static auto* g = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* flags = &::il2cpp_utils::GetClassFromName("System", "Guid/GuidStyles")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "Guid/GuidResult")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Guid), "TryParseGuid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{g, flags, result});
  }
};
// Writing MetadataGetter for method: System::Guid::TryParseGuidWithHexPrefix
// Il2CppName: TryParseGuidWithHexPrefix
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<::System::Guid::GuidResult>)>(&System::Guid::TryParseGuidWithHexPrefix)> {
  static const MethodInfo* get() {
    static auto* guidString = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "Guid/GuidResult")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Guid), "TryParseGuidWithHexPrefix", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{guidString, result});
  }
};
// Writing MetadataGetter for method: System::Guid::TryParseGuidWithNoStyle
// Il2CppName: TryParseGuidWithNoStyle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<::System::Guid::GuidResult>)>(&System::Guid::TryParseGuidWithNoStyle)> {
  static const MethodInfo* get() {
    static auto* guidString = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "Guid/GuidResult")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Guid), "TryParseGuidWithNoStyle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{guidString, result});
  }
};
// Writing MetadataGetter for method: System::Guid::TryParseGuidWithDashes
// Il2CppName: TryParseGuidWithDashes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<::System::Guid::GuidResult>)>(&System::Guid::TryParseGuidWithDashes)> {
  static const MethodInfo* get() {
    static auto* guidString = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "Guid/GuidResult")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Guid), "TryParseGuidWithDashes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{guidString, result});
  }
};
// Writing MetadataGetter for method: System::Guid::StringToShort
// Il2CppName: StringToShort
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, int, int, ByRef<int16_t>, ByRef<::System::Guid::GuidResult>)>(&System::Guid::StringToShort)> {
  static const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* requiredLength = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* flags = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "Int16")->this_arg;
    static auto* parseResult = &::il2cpp_utils::GetClassFromName("System", "Guid/GuidResult")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Guid), "StringToShort", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str, requiredLength, flags, result, parseResult});
  }
};
// Writing MetadataGetter for method: System::Guid::StringToShort
// Il2CppName: StringToShort
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, int*, int, int, ByRef<int16_t>, ByRef<::System::Guid::GuidResult>)>(&System::Guid::StringToShort)> {
  static const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* parsePos = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Int32"))->byval_arg;
    static auto* requiredLength = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* flags = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "Int16")->this_arg;
    static auto* parseResult = &::il2cpp_utils::GetClassFromName("System", "Guid/GuidResult")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Guid), "StringToShort", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str, parsePos, requiredLength, flags, result, parseResult});
  }
};
// Writing MetadataGetter for method: System::Guid::StringToInt
// Il2CppName: StringToInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, int, int, ByRef<int>, ByRef<::System::Guid::GuidResult>)>(&System::Guid::StringToInt)> {
  static const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* requiredLength = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* flags = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* parseResult = &::il2cpp_utils::GetClassFromName("System", "Guid/GuidResult")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Guid), "StringToInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str, requiredLength, flags, result, parseResult});
  }
};
// Writing MetadataGetter for method: System::Guid::StringToInt
// Il2CppName: StringToInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<int>, int, int, ByRef<int>, ByRef<::System::Guid::GuidResult>)>(&System::Guid::StringToInt)> {
  static const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* parsePos = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* requiredLength = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* flags = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* parseResult = &::il2cpp_utils::GetClassFromName("System", "Guid/GuidResult")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Guid), "StringToInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str, parsePos, requiredLength, flags, result, parseResult});
  }
};
// Writing MetadataGetter for method: System::Guid::StringToInt
// Il2CppName: StringToInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, int*, int, int, ByRef<int>, ByRef<::System::Guid::GuidResult>)>(&System::Guid::StringToInt)> {
  static const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* parsePos = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Int32"))->byval_arg;
    static auto* requiredLength = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* flags = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* parseResult = &::il2cpp_utils::GetClassFromName("System", "Guid/GuidResult")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Guid), "StringToInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str, parsePos, requiredLength, flags, result, parseResult});
  }
};
// Writing MetadataGetter for method: System::Guid::StringToLong
// Il2CppName: StringToLong
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<int>, int, ByRef<int64_t>, ByRef<::System::Guid::GuidResult>)>(&System::Guid::StringToLong)> {
  static const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* parsePos = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* flags = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "Int64")->this_arg;
    static auto* parseResult = &::il2cpp_utils::GetClassFromName("System", "Guid/GuidResult")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Guid), "StringToLong", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str, parsePos, flags, result, parseResult});
  }
};
// Writing MetadataGetter for method: System::Guid::StringToLong
// Il2CppName: StringToLong
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, int*, int, ByRef<int64_t>, ByRef<::System::Guid::GuidResult>)>(&System::Guid::StringToLong)> {
  static const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* parsePos = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Int32"))->byval_arg;
    static auto* flags = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "Int64")->this_arg;
    static auto* parseResult = &::il2cpp_utils::GetClassFromName("System", "Guid/GuidResult")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Guid), "StringToLong", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str, parsePos, flags, result, parseResult});
  }
};
// Writing MetadataGetter for method: System::Guid::EatAllWhitespace
// Il2CppName: EatAllWhitespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&System::Guid::EatAllWhitespace)> {
  static const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Guid), "EatAllWhitespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str});
  }
};
// Writing MetadataGetter for method: System::Guid::IsHexPrefix
// Il2CppName: IsHexPrefix
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, int)>(&System::Guid::IsHexPrefix)> {
  static const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Guid), "IsHexPrefix", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str, i});
  }
};
// Writing MetadataGetter for method: System::Guid::ToByteArray
// Il2CppName: ToByteArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Guid::*)()>(&System::Guid::ToByteArray)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Guid), "ToByteArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Guid::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Guid::*)(::System::Guid)>(&System::Guid::Equals)> {
  static const MethodInfo* get() {
    static auto* g = &::il2cpp_utils::GetClassFromName("System", "Guid")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Guid), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{g});
  }
};
// Writing MetadataGetter for method: System::Guid::GetResult
// Il2CppName: GetResult
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Guid::*)(uint, uint)>(&System::Guid::GetResult)> {
  static const MethodInfo* get() {
    static auto* me = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* them = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Guid), "GetResult", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{me, them});
  }
};
// Writing MetadataGetter for method: System::Guid::CompareTo
// Il2CppName: CompareTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Guid::*)(::Il2CppObject*)>(&System::Guid::CompareTo)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Guid), "CompareTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Guid::CompareTo
// Il2CppName: CompareTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Guid::*)(::System::Guid)>(&System::Guid::CompareTo)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Guid")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Guid), "CompareTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Guid::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Guid::*)(::StringW)>(&System::Guid::ToString)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Guid), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format});
  }
};
// Writing MetadataGetter for method: System::Guid::HexToChar
// Il2CppName: HexToChar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppChar (*)(int)>(&System::Guid::HexToChar)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Guid), "HexToChar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a});
  }
};
// Writing MetadataGetter for method: System::Guid::HexsToChars
// Il2CppName: HexsToChars
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::Il2CppChar*, int, int, int)>(&System::Guid::HexsToChars)> {
  static const MethodInfo* get() {
    static auto* guidChars = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Guid), "HexsToChars", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{guidChars, offset, a, b});
  }
};
// Writing MetadataGetter for method: System::Guid::HexsToChars
// Il2CppName: HexsToChars
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::Il2CppChar*, int, int, int, bool)>(&System::Guid::HexsToChars)> {
  static const MethodInfo* get() {
    static auto* guidChars = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* hex = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Guid), "HexsToChars", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{guidChars, offset, a, b, hex});
  }
};
// Writing MetadataGetter for method: System::Guid::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Guid::*)(::StringW, ::System::IFormatProvider*)>(&System::Guid::ToString)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Guid), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format, provider});
  }
};
// Writing MetadataGetter for method: System::Guid::NewGuid
// Il2CppName: NewGuid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Guid (*)()>(&System::Guid::NewGuid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Guid), "NewGuid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Guid::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Guid::*)()>(&System::Guid::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Guid), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Guid::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Guid::*)()>(&System::Guid::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Guid), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Guid::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Guid::*)(::Il2CppObject*)>(&System::Guid::Equals)> {
  static const MethodInfo* get() {
    static auto* o = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Guid), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{o});
  }
};
// Writing MetadataGetter for method: System::Guid::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Guid::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!
