#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System::Reflection {
class PropertyInfo;
}
namespace System {
class Type;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Net {
class IPEndPoint;
}
namespace LiteNetLib::Utils {
template<typename TProperty>
class LiteNetLib__Utils__NetSerializer__CustomTypeStatic_1;
}
namespace LiteNetLib::Utils {
template<typename T>
class LiteNetLib__Utils__NetSerializer__DoubleSerializer_1;
}
namespace LiteNetLib::Utils {
template<typename T>
class LiteNetLib__Utils__NetSerializer__UShortSerializer_1;
}
namespace LiteNetLib::Utils {
template<typename T>
class LiteNetLib__Utils__NetSerializer__CharSerializer_1;
}
namespace LiteNetLib::Utils {
template<typename T>
class LiteNetLib__Utils__NetSerializer__EnumByteSerializer_1;
}
namespace LiteNetLib::Utils {
template<typename TProperty>
class LiteNetLib__Utils__NetSerializer__CustomTypeStruct_1;
}
namespace LiteNetLib::Utils {
template<typename TClass,typename TProperty>
class LiteNetLib__Utils__NetSerializer__FastCallSpecificAuto_2;
}
namespace LiteNetLib::Utils {
template<typename TClass,typename TProperty>
class LiteNetLib__Utils__NetSerializer__FastCallSpecific_2;
}
namespace LiteNetLib::Utils {
template<typename T>
class LiteNetLib__Utils__NetSerializer__FloatSerializer_1;
}
namespace LiteNetLib::Utils {
template<typename T>
class LiteNetLib__Utils__NetSerializer__IPEndPointSerializer_1;
}
namespace LiteNetLib::Utils {
template<typename T>
class LiteNetLib__Utils__NetSerializer__LongSerializer_1;
}
namespace LiteNetLib::Utils {
template<typename TProperty>
class LiteNetLib__Utils__NetSerializer__CustomTypeClass_1;
}
namespace LiteNetLib::Utils {
template<typename T>
class LiteNetLib__Utils__NetSerializer__UIntSerializer_1;
}
namespace LiteNetLib::Utils {
template<typename TClass,typename TProperty>
class LiteNetLib__Utils__NetSerializer__FastCallStatic_2;
}
namespace LiteNetLib::Utils {
template<typename T>
class LiteNetLib__Utils__NetSerializer__ByteSerializer_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace LiteNetLib::Utils {
class LiteNetLib__Utils__NetSerializer__CustomType;
}
namespace LiteNetLib::Utils {
template<typename T>
class LiteNetLib__Utils__NetSerializer__IntSerializer_1;
}
namespace LiteNetLib::Utils {
template<typename T>
class LiteNetLib__Utils__NetSerializer__ShortSerializer_1;
}
namespace LiteNetLib::Utils {
template<typename T>
class LiteNetLib__Utils__NetSerializer__BoolSerializer_1;
}
namespace LiteNetLib::Utils {
template<typename T>
class LiteNetLib__Utils__NetSerializer__EnumIntSerializer_1;
}
namespace LiteNetLib::Utils {
template<typename T>
class LiteNetLib__Utils__NetSerializer__SByteSerializer_1;
}
namespace LiteNetLib::Utils {
template<typename TClass,typename TProperty>
class LiteNetLib__Utils__NetSerializer__FastCallClass_2;
}
namespace LiteNetLib::Utils {
template<typename T>
class LiteNetLib__Utils__NetSerializer__StringSerializer_1;
}
namespace LiteNetLib::Utils {
template<typename T>
class LiteNetLib__Utils__NetSerializer__ULongSerializer_1;
}
namespace LiteNetLib::Utils {
template<typename T>
class LiteNetLib__Utils__NetSerializer__ClassInfo_1;
}
namespace LiteNetLib::Utils {
template<typename T>
class LiteNetLib__Utils__NetSerializer__FastCall_1;
}
namespace LiteNetLib::Utils {
template<typename TClass,typename TProperty>
class LiteNetLib__Utils__NetSerializer__FastCallStruct_2;
}
// Forward declare root types
namespace LiteNetLib::Utils {
template<typename T>
class LiteNetLib__Utils__NetSerializer__BoolSerializer_1;
}
namespace LiteNetLib::Utils {
template<typename T>
class LiteNetLib__Utils__NetSerializer__ByteSerializer_1;
}
namespace LiteNetLib::Utils {
template<typename T>
class LiteNetLib__Utils__NetSerializer__CharSerializer_1;
}
namespace LiteNetLib::Utils {
template<typename T>
class LiteNetLib__Utils__NetSerializer__ClassInfo_1;
}
namespace LiteNetLib::Utils {
template<typename TProperty>
class LiteNetLib__Utils__NetSerializer__CustomTypeClass_1;
}
namespace LiteNetLib::Utils {
template<typename TProperty>
class LiteNetLib__Utils__NetSerializer__CustomTypeStatic_1;
}
namespace LiteNetLib::Utils {
template<typename T>
class LiteNetLib__Utils__NetSerializer__DoubleSerializer_1;
}
namespace LiteNetLib::Utils {
template<typename T>
class LiteNetLib__Utils__NetSerializer__EnumByteSerializer_1;
}
namespace LiteNetLib::Utils {
template<typename T>
class LiteNetLib__Utils__NetSerializer__EnumIntSerializer_1;
}
namespace LiteNetLib::Utils {
template<typename TClass,typename TProperty>
class LiteNetLib__Utils__NetSerializer__FastCallClass_2;
}
namespace LiteNetLib::Utils {
template<typename TClass,typename TProperty>
class LiteNetLib__Utils__NetSerializer__FastCallSpecificAuto_2;
}
namespace LiteNetLib::Utils {
template<typename TClass,typename TProperty>
class LiteNetLib__Utils__NetSerializer__FastCallSpecific_2;
}
namespace LiteNetLib::Utils {
template<typename TClass,typename TProperty>
class LiteNetLib__Utils__NetSerializer__FastCallStatic_2;
}
namespace LiteNetLib::Utils {
template<typename T>
class LiteNetLib__Utils__NetSerializer__FastCall_1;
}
namespace LiteNetLib::Utils {
template<typename T>
class LiteNetLib__Utils__NetSerializer__FloatSerializer_1;
}
namespace LiteNetLib::Utils {
template<typename T>
class LiteNetLib__Utils__NetSerializer__IPEndPointSerializer_1;
}
namespace LiteNetLib::Utils {
template<typename T>
class LiteNetLib__Utils__NetSerializer__IntSerializer_1;
}
namespace LiteNetLib::Utils {
template<typename T>
class LiteNetLib__Utils__NetSerializer__LongSerializer_1;
}
namespace LiteNetLib::Utils {
template<typename T>
class LiteNetLib__Utils__NetSerializer__SByteSerializer_1;
}
namespace LiteNetLib::Utils {
template<typename T>
class LiteNetLib__Utils__NetSerializer__ShortSerializer_1;
}
namespace LiteNetLib::Utils {
template<typename T>
class LiteNetLib__Utils__NetSerializer__StringSerializer_1;
}
namespace LiteNetLib::Utils {
template<typename T>
class LiteNetLib__Utils__NetSerializer__UIntSerializer_1;
}
namespace LiteNetLib::Utils {
template<typename T>
class LiteNetLib__Utils__NetSerializer__ULongSerializer_1;
}
namespace LiteNetLib::Utils {
template<typename T>
class LiteNetLib__Utils__NetSerializer__UShortSerializer_1;
}
namespace LiteNetLib::Utils {
template<::cordl_internals::il2cpp_reference_type T>
class LiteNetLib__Utils__NetSerializer__BoolSerializer_1<T>;
}
namespace LiteNetLib::Utils {
template<::cordl_internals::il2cpp_reference_type T>
class LiteNetLib__Utils__NetSerializer__ByteSerializer_1<T>;
}
namespace LiteNetLib::Utils {
template<::cordl_internals::il2cpp_reference_type T>
class LiteNetLib__Utils__NetSerializer__CharSerializer_1<T>;
}
namespace LiteNetLib::Utils {
template<::cordl_internals::il2cpp_reference_type T>
class LiteNetLib__Utils__NetSerializer__ClassInfo_1<T>;
}
namespace LiteNetLib::Utils {
class LiteNetLib__Utils__NetSerializer__CustomType;
}
namespace LiteNetLib::Utils {
template<::cordl_internals::il2cpp_reference_type TProperty>
class LiteNetLib__Utils__NetSerializer__CustomTypeClass_1<TProperty>;
}
namespace LiteNetLib::Utils {
template<::cordl_internals::il2cpp_reference_type TProperty>
class LiteNetLib__Utils__NetSerializer__CustomTypeStatic_1<TProperty>;
}
namespace LiteNetLib::Utils {
template<typename TProperty>
class LiteNetLib__Utils__NetSerializer__CustomTypeStruct_1;
}
namespace LiteNetLib::Utils {
template<::cordl_internals::il2cpp_reference_type T>
class LiteNetLib__Utils__NetSerializer__DoubleSerializer_1<T>;
}
namespace LiteNetLib::Utils {
template<::cordl_internals::il2cpp_reference_type T>
class LiteNetLib__Utils__NetSerializer__EnumByteSerializer_1<T>;
}
namespace LiteNetLib::Utils {
template<::cordl_internals::il2cpp_reference_type T>
class LiteNetLib__Utils__NetSerializer__EnumIntSerializer_1<T>;
}
namespace LiteNetLib::Utils {
template<::cordl_internals::il2cpp_reference_type TClass,::cordl_internals::il2cpp_reference_type TProperty>
class LiteNetLib__Utils__NetSerializer__FastCallClass_2<TClass,TProperty>;
}
namespace LiteNetLib::Utils {
template<::cordl_internals::il2cpp_reference_type TClass,::cordl_internals::il2cpp_reference_type TProperty>
class LiteNetLib__Utils__NetSerializer__FastCallSpecificAuto_2<TClass,TProperty>;
}
namespace LiteNetLib::Utils {
template<::cordl_internals::il2cpp_reference_type TClass>
class LiteNetLib__Utils__NetSerializer__FastCallSpecificAuto_2<TClass,char16_t>;
}
namespace LiteNetLib::Utils {
template<::cordl_internals::il2cpp_reference_type TClass,::cordl_internals::is_or_is_backed_by<uint16_t> TProperty>
class LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>;
}
namespace LiteNetLib::Utils {
template<::cordl_internals::il2cpp_reference_type TClass,::cordl_internals::is_or_is_backed_by<int8_t> TProperty>
class LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>;
}
namespace LiteNetLib::Utils {
template<::cordl_internals::il2cpp_reference_type TClass,::cordl_internals::is_or_is_backed_by<uint32_t> TProperty>
class LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>;
}
namespace LiteNetLib::Utils {
template<::cordl_internals::il2cpp_reference_type TClass,::cordl_internals::is_or_is_backed_by<int64_t> TProperty>
class LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>;
}
namespace LiteNetLib::Utils {
template<::cordl_internals::il2cpp_reference_type TClass,::cordl_internals::is_or_is_backed_by<uint64_t> TProperty>
class LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>;
}
namespace LiteNetLib::Utils {
template<::cordl_internals::il2cpp_reference_type TClass,::cordl_internals::is_or_is_backed_by<int32_t> TProperty>
class LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>;
}
namespace LiteNetLib::Utils {
template<::cordl_internals::il2cpp_reference_type TClass,::cordl_internals::is_or_is_backed_by<uint8_t> TProperty>
class LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>;
}
namespace LiteNetLib::Utils {
template<::cordl_internals::il2cpp_reference_type TClass,::cordl_internals::is_or_is_backed_by<int16_t> TProperty>
class LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>;
}
namespace LiteNetLib::Utils {
template<::cordl_internals::il2cpp_reference_type TClass,::cordl_internals::il2cpp_reference_type TProperty>
class LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>;
}
namespace LiteNetLib::Utils {
template<::cordl_internals::il2cpp_reference_type TClass>
class LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,bool>;
}
namespace LiteNetLib::Utils {
template<::cordl_internals::il2cpp_reference_type TClass>
class LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,char16_t>;
}
namespace LiteNetLib::Utils {
template<::cordl_internals::il2cpp_reference_type TClass>
class LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,double_t>;
}
namespace LiteNetLib::Utils {
template<::cordl_internals::il2cpp_reference_type TClass>
class LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,float_t>;
}
namespace LiteNetLib::Utils {
template<::cordl_internals::il2cpp_reference_type TClass,::cordl_internals::il2cpp_reference_type TProperty>
class LiteNetLib__Utils__NetSerializer__FastCallStatic_2<TClass,TProperty>;
}
namespace LiteNetLib::Utils {
template<typename TClass,typename TProperty>
class LiteNetLib__Utils__NetSerializer__FastCallStruct_2;
}
namespace LiteNetLib::Utils {
template<::cordl_internals::il2cpp_reference_type T>
class LiteNetLib__Utils__NetSerializer__FastCall_1<T>;
}
namespace LiteNetLib::Utils {
template<::cordl_internals::il2cpp_reference_type T>
class LiteNetLib__Utils__NetSerializer__FloatSerializer_1<T>;
}
namespace LiteNetLib::Utils {
template<::cordl_internals::il2cpp_reference_type T>
class LiteNetLib__Utils__NetSerializer__IPEndPointSerializer_1<T>;
}
namespace LiteNetLib::Utils {
template<::cordl_internals::il2cpp_reference_type T>
class LiteNetLib__Utils__NetSerializer__IntSerializer_1<T>;
}
namespace LiteNetLib::Utils {
template<::cordl_internals::il2cpp_reference_type T>
class LiteNetLib__Utils__NetSerializer__LongSerializer_1<T>;
}
namespace LiteNetLib::Utils {
template<::cordl_internals::il2cpp_reference_type T>
class LiteNetLib__Utils__NetSerializer__SByteSerializer_1<T>;
}
namespace LiteNetLib::Utils {
template<::cordl_internals::il2cpp_reference_type T>
class LiteNetLib__Utils__NetSerializer__ShortSerializer_1<T>;
}
namespace LiteNetLib::Utils {
template<::cordl_internals::il2cpp_reference_type T>
class LiteNetLib__Utils__NetSerializer__StringSerializer_1<T>;
}
namespace LiteNetLib::Utils {
template<::cordl_internals::il2cpp_reference_type T>
class LiteNetLib__Utils__NetSerializer__UIntSerializer_1<T>;
}
namespace LiteNetLib::Utils {
template<::cordl_internals::il2cpp_reference_type T>
class LiteNetLib__Utils__NetSerializer__ULongSerializer_1<T>;
}
namespace LiteNetLib::Utils {
template<::cordl_internals::il2cpp_reference_type T>
class LiteNetLib__Utils__NetSerializer__UShortSerializer_1<T>;
}
namespace LiteNetLib::Utils {
class NetSerializer;
}
// Type: ::FastCall`1
// Type: ::FastCallSpecific`2
// Type: ::FastCallSpecificAuto`2
// Type: ::FastCallStatic`2
// Type: ::FastCall`1
namespace LiteNetLib::Utils {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14490))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14490), inst: 2 })
// CS Name: LiteNetLib.Utils.NetSerializer::FastCall`1
class CORDL_TYPE LiteNetLib__Utils__NetSerializer__FastCall_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~LiteNetLib__Utils__NetSerializer__FastCall_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__Utils__NetSerializer__FastCall_1", modifiers: " const&", def_value: None }]
constexpr LiteNetLib__Utils__NetSerializer__FastCall_1(LiteNetLib__Utils__NetSerializer__FastCall_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__Utils__NetSerializer__FastCall_1", modifiers: "&&", def_value: None }]
constexpr LiteNetLib__Utils__NetSerializer__FastCall_1(LiteNetLib__Utils__NetSerializer__FastCall_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LiteNetLib__Utils__NetSerializer__FastCall_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LiteNetLib__Utils__NetSerializer__FastCall_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LiteNetLib__Utils__NetSerializer__FastCall_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LiteNetLib__Utils__NetSerializer__FastCall_1& operator=(LiteNetLib__Utils__NetSerializer__FastCall_1&& o) noexcept = default;
  constexpr LiteNetLib__Utils__NetSerializer__FastCall_1& operator=(LiteNetLib__Utils__NetSerializer__FastCall_1 const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_IsArray, put=__set_IsArray))  IsArray;

constexpr void __set_IsArray(bool value) ;

constexpr bool __get_IsArray() const;


// Methods

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
 void Init(System::Reflection::MethodInfo getMethod, System::Reflection::MethodInfo setMethod, bool isArray) ;

/// @brief Method Read addr 0x0 size 0xffffffffffffffff virtual true final false
 void Read(T inf, LiteNetLib::Utils::NetDataReader r) ;

/// @brief Method Write addr 0x0 size 0xffffffffffffffff virtual true final false
 void Write(T inf, LiteNetLib::Utils::NetDataWriter w) ;

/// @brief Method ReadArray addr 0x0 size 0xffffffffffffffff virtual true final false
 void ReadArray(T inf, LiteNetLib::Utils::NetDataReader r) ;

/// @brief Method WriteArray addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteArray(T inf, LiteNetLib::Utils::NetDataWriter w) ;

static LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCall_1<T> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib::Utils
// Type: ::FastCallSpecific`2
namespace LiteNetLib::Utils {
// cpp template
template<::cordl_internals::il2cpp_reference_type TClass,::cordl_internals::is_or_is_backed_by<uint64_t> TProperty>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14491)), TypeDefinitionIndex(TypeDefinitionIndex(14490)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14490), inst: 1891 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14491), inst: 6267 })
// CS Name: LiteNetLib.Utils.NetSerializer::FastCallSpecific`2
class CORDL_TYPE LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty> : public LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCall_1<TClass> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~LiteNetLib__Utils__NetSerializer__FastCallSpecific_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__Utils__NetSerializer__FastCallSpecific_2", modifiers: " const&", def_value: None }]
constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecific_2(LiteNetLib__Utils__NetSerializer__FastCallSpecific_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__Utils__NetSerializer__FastCallSpecific_2", modifiers: "&&", def_value: None }]
constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecific_2(LiteNetLib__Utils__NetSerializer__FastCallSpecific_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LiteNetLib__Utils__NetSerializer__FastCallSpecific_2(void* ptr) noexcept : LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCall_1<TClass>(ptr) {
}


  constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecific_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecific_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecific_2& operator=(LiteNetLib__Utils__NetSerializer__FastCallSpecific_2&& o) noexcept = default;
  constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecific_2& operator=(LiteNetLib__Utils__NetSerializer__FastCallSpecific_2 const& o) noexcept = default;
                


// Fields

 System::Func_2<TClass,TProperty> __declspec(property(get=__get_Getter, put=__set_Getter))  Getter;

constexpr void __set_Getter(System::Func_2<TClass,TProperty> value) ;

constexpr System::Func_2<TClass,TProperty> __get_Getter() const;

 System::Action_2<TClass,TProperty> __declspec(property(get=__get_Setter, put=__set_Setter))  Setter;

constexpr void __set_Setter(System::Action_2<TClass,TProperty> value) ;

constexpr System::Action_2<TClass,TProperty> __get_Setter() const;

 System::Func_2<TClass,::ArrayW<TProperty>> __declspec(property(get=__get_GetterArr, put=__set_GetterArr))  GetterArr;

constexpr void __set_GetterArr(System::Func_2<TClass,::ArrayW<TProperty>> value) ;

constexpr System::Func_2<TClass,::ArrayW<TProperty>> __get_GetterArr() const;

 System::Action_2<TClass,::ArrayW<TProperty>> __declspec(property(get=__get_SetterArr, put=__set_SetterArr))  SetterArr;

constexpr void __set_SetterArr(System::Action_2<TClass,::ArrayW<TProperty>> value) ;

constexpr System::Action_2<TClass,::ArrayW<TProperty>> __get_SetterArr() const;


// Methods

/// @brief Method ReadArrayHelper addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<TProperty> ReadArrayHelper(TClass inf, LiteNetLib::Utils::NetDataReader r) ;

/// @brief Method WriteArrayHelper addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<TProperty> WriteArrayHelper(TClass inf, LiteNetLib::Utils::NetDataWriter w) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
 void Init(System::Reflection::MethodInfo getMethod, System::Reflection::MethodInfo setMethod, bool isArray) ;

static LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib::Utils
// Type: ::FastCallSpecific`2
namespace LiteNetLib::Utils {
// cpp template
template<::cordl_internals::il2cpp_reference_type TClass,::cordl_internals::is_or_is_backed_by<uint16_t> TProperty>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14490), inst: 1891 }), TypeDefinitionIndex(TypeDefinitionIndex(14490)), TypeDefinitionIndex(TypeDefinitionIndex(14491))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14491), inst: 6266 })
// CS Name: LiteNetLib.Utils.NetSerializer::FastCallSpecific`2
class CORDL_TYPE LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty> : public LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCall_1<TClass> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~LiteNetLib__Utils__NetSerializer__FastCallSpecific_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__Utils__NetSerializer__FastCallSpecific_2", modifiers: " const&", def_value: None }]
constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecific_2(LiteNetLib__Utils__NetSerializer__FastCallSpecific_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__Utils__NetSerializer__FastCallSpecific_2", modifiers: "&&", def_value: None }]
constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecific_2(LiteNetLib__Utils__NetSerializer__FastCallSpecific_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LiteNetLib__Utils__NetSerializer__FastCallSpecific_2(void* ptr) noexcept : LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCall_1<TClass>(ptr) {
}


  constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecific_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecific_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecific_2& operator=(LiteNetLib__Utils__NetSerializer__FastCallSpecific_2&& o) noexcept = default;
  constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecific_2& operator=(LiteNetLib__Utils__NetSerializer__FastCallSpecific_2 const& o) noexcept = default;
                


// Fields

 System::Func_2<TClass,TProperty> __declspec(property(get=__get_Getter, put=__set_Getter))  Getter;

constexpr void __set_Getter(System::Func_2<TClass,TProperty> value) ;

constexpr System::Func_2<TClass,TProperty> __get_Getter() const;

 System::Action_2<TClass,TProperty> __declspec(property(get=__get_Setter, put=__set_Setter))  Setter;

constexpr void __set_Setter(System::Action_2<TClass,TProperty> value) ;

constexpr System::Action_2<TClass,TProperty> __get_Setter() const;

 System::Func_2<TClass,::ArrayW<TProperty>> __declspec(property(get=__get_GetterArr, put=__set_GetterArr))  GetterArr;

constexpr void __set_GetterArr(System::Func_2<TClass,::ArrayW<TProperty>> value) ;

constexpr System::Func_2<TClass,::ArrayW<TProperty>> __get_GetterArr() const;

 System::Action_2<TClass,::ArrayW<TProperty>> __declspec(property(get=__get_SetterArr, put=__set_SetterArr))  SetterArr;

constexpr void __set_SetterArr(System::Action_2<TClass,::ArrayW<TProperty>> value) ;

constexpr System::Action_2<TClass,::ArrayW<TProperty>> __get_SetterArr() const;


// Methods

/// @brief Method ReadArrayHelper addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<TProperty> ReadArrayHelper(TClass inf, LiteNetLib::Utils::NetDataReader r) ;

/// @brief Method WriteArrayHelper addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<TProperty> WriteArrayHelper(TClass inf, LiteNetLib::Utils::NetDataWriter w) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
 void Init(System::Reflection::MethodInfo getMethod, System::Reflection::MethodInfo setMethod, bool isArray) ;

static LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib::Utils
// Type: ::FastCallSpecific`2
namespace LiteNetLib::Utils {
// cpp template
template<::cordl_internals::il2cpp_reference_type TClass,::cordl_internals::is_or_is_backed_by<int8_t> TProperty>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14490), inst: 1891 }), TypeDefinitionIndex(TypeDefinitionIndex(14490)), TypeDefinitionIndex(TypeDefinitionIndex(14491))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14491), inst: 6264 })
// CS Name: LiteNetLib.Utils.NetSerializer::FastCallSpecific`2
class CORDL_TYPE LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty> : public LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCall_1<TClass> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~LiteNetLib__Utils__NetSerializer__FastCallSpecific_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__Utils__NetSerializer__FastCallSpecific_2", modifiers: " const&", def_value: None }]
constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecific_2(LiteNetLib__Utils__NetSerializer__FastCallSpecific_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__Utils__NetSerializer__FastCallSpecific_2", modifiers: "&&", def_value: None }]
constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecific_2(LiteNetLib__Utils__NetSerializer__FastCallSpecific_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LiteNetLib__Utils__NetSerializer__FastCallSpecific_2(void* ptr) noexcept : LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCall_1<TClass>(ptr) {
}


  constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecific_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecific_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecific_2& operator=(LiteNetLib__Utils__NetSerializer__FastCallSpecific_2&& o) noexcept = default;
  constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecific_2& operator=(LiteNetLib__Utils__NetSerializer__FastCallSpecific_2 const& o) noexcept = default;
                


// Fields

 System::Func_2<TClass,TProperty> __declspec(property(get=__get_Getter, put=__set_Getter))  Getter;

constexpr void __set_Getter(System::Func_2<TClass,TProperty> value) ;

constexpr System::Func_2<TClass,TProperty> __get_Getter() const;

 System::Action_2<TClass,TProperty> __declspec(property(get=__get_Setter, put=__set_Setter))  Setter;

constexpr void __set_Setter(System::Action_2<TClass,TProperty> value) ;

constexpr System::Action_2<TClass,TProperty> __get_Setter() const;

 System::Func_2<TClass,::ArrayW<TProperty>> __declspec(property(get=__get_GetterArr, put=__set_GetterArr))  GetterArr;

constexpr void __set_GetterArr(System::Func_2<TClass,::ArrayW<TProperty>> value) ;

constexpr System::Func_2<TClass,::ArrayW<TProperty>> __get_GetterArr() const;

 System::Action_2<TClass,::ArrayW<TProperty>> __declspec(property(get=__get_SetterArr, put=__set_SetterArr))  SetterArr;

constexpr void __set_SetterArr(System::Action_2<TClass,::ArrayW<TProperty>> value) ;

constexpr System::Action_2<TClass,::ArrayW<TProperty>> __get_SetterArr() const;


// Methods

/// @brief Method ReadArrayHelper addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<TProperty> ReadArrayHelper(TClass inf, LiteNetLib::Utils::NetDataReader r) ;

/// @brief Method WriteArrayHelper addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<TProperty> WriteArrayHelper(TClass inf, LiteNetLib::Utils::NetDataWriter w) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
 void Init(System::Reflection::MethodInfo getMethod, System::Reflection::MethodInfo setMethod, bool isArray) ;

static LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib::Utils
// Type: ::FastCallSpecific`2
namespace LiteNetLib::Utils {
// cpp template
template<::cordl_internals::il2cpp_reference_type TClass,::cordl_internals::is_or_is_backed_by<int16_t> TProperty>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14490)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14490), inst: 1891 }), TypeDefinitionIndex(TypeDefinitionIndex(14491))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14491), inst: 6262 })
// CS Name: LiteNetLib.Utils.NetSerializer::FastCallSpecific`2
class CORDL_TYPE LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty> : public LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCall_1<TClass> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~LiteNetLib__Utils__NetSerializer__FastCallSpecific_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__Utils__NetSerializer__FastCallSpecific_2", modifiers: " const&", def_value: None }]
constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecific_2(LiteNetLib__Utils__NetSerializer__FastCallSpecific_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__Utils__NetSerializer__FastCallSpecific_2", modifiers: "&&", def_value: None }]
constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecific_2(LiteNetLib__Utils__NetSerializer__FastCallSpecific_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LiteNetLib__Utils__NetSerializer__FastCallSpecific_2(void* ptr) noexcept : LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCall_1<TClass>(ptr) {
}


  constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecific_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecific_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecific_2& operator=(LiteNetLib__Utils__NetSerializer__FastCallSpecific_2&& o) noexcept = default;
  constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecific_2& operator=(LiteNetLib__Utils__NetSerializer__FastCallSpecific_2 const& o) noexcept = default;
                


// Fields

 System::Func_2<TClass,TProperty> __declspec(property(get=__get_Getter, put=__set_Getter))  Getter;

constexpr void __set_Getter(System::Func_2<TClass,TProperty> value) ;

constexpr System::Func_2<TClass,TProperty> __get_Getter() const;

 System::Action_2<TClass,TProperty> __declspec(property(get=__get_Setter, put=__set_Setter))  Setter;

constexpr void __set_Setter(System::Action_2<TClass,TProperty> value) ;

constexpr System::Action_2<TClass,TProperty> __get_Setter() const;

 System::Func_2<TClass,::ArrayW<TProperty>> __declspec(property(get=__get_GetterArr, put=__set_GetterArr))  GetterArr;

constexpr void __set_GetterArr(System::Func_2<TClass,::ArrayW<TProperty>> value) ;

constexpr System::Func_2<TClass,::ArrayW<TProperty>> __get_GetterArr() const;

 System::Action_2<TClass,::ArrayW<TProperty>> __declspec(property(get=__get_SetterArr, put=__set_SetterArr))  SetterArr;

constexpr void __set_SetterArr(System::Action_2<TClass,::ArrayW<TProperty>> value) ;

constexpr System::Action_2<TClass,::ArrayW<TProperty>> __get_SetterArr() const;


// Methods

/// @brief Method ReadArrayHelper addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<TProperty> ReadArrayHelper(TClass inf, LiteNetLib::Utils::NetDataReader r) ;

/// @brief Method WriteArrayHelper addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<TProperty> WriteArrayHelper(TClass inf, LiteNetLib::Utils::NetDataWriter w) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
 void Init(System::Reflection::MethodInfo getMethod, System::Reflection::MethodInfo setMethod, bool isArray) ;

static LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib::Utils
// Type: ::FastCallSpecific`2
namespace LiteNetLib::Utils {
// cpp template
template<::cordl_internals::il2cpp_reference_type TClass>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14491)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14490), inst: 1891 }), TypeDefinitionIndex(TypeDefinitionIndex(14490))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14491), inst: 6260 })
// CS Name: LiteNetLib.Utils.NetSerializer::FastCallSpecific`2
class CORDL_TYPE LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,double_t> : public LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCall_1<TClass> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~LiteNetLib__Utils__NetSerializer__FastCallSpecific_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__Utils__NetSerializer__FastCallSpecific_2", modifiers: " const&", def_value: None }]
constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecific_2(LiteNetLib__Utils__NetSerializer__FastCallSpecific_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__Utils__NetSerializer__FastCallSpecific_2", modifiers: "&&", def_value: None }]
constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecific_2(LiteNetLib__Utils__NetSerializer__FastCallSpecific_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LiteNetLib__Utils__NetSerializer__FastCallSpecific_2(void* ptr) noexcept : LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCall_1<TClass>(ptr) {
}


  constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecific_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecific_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecific_2& operator=(LiteNetLib__Utils__NetSerializer__FastCallSpecific_2&& o) noexcept = default;
  constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecific_2& operator=(LiteNetLib__Utils__NetSerializer__FastCallSpecific_2 const& o) noexcept = default;
                


// Fields

 System::Func_2<TClass,double_t> __declspec(property(get=__get_Getter, put=__set_Getter))  Getter;

constexpr void __set_Getter(System::Func_2<TClass,double_t> value) ;

constexpr System::Func_2<TClass,double_t> __get_Getter() const;

 System::Action_2<TClass,double_t> __declspec(property(get=__get_Setter, put=__set_Setter))  Setter;

constexpr void __set_Setter(System::Action_2<TClass,double_t> value) ;

constexpr System::Action_2<TClass,double_t> __get_Setter() const;

 System::Func_2<TClass,::ArrayW<double_t>> __declspec(property(get=__get_GetterArr, put=__set_GetterArr))  GetterArr;

constexpr void __set_GetterArr(System::Func_2<TClass,::ArrayW<double_t>> value) ;

constexpr System::Func_2<TClass,::ArrayW<double_t>> __get_GetterArr() const;

 System::Action_2<TClass,::ArrayW<double_t>> __declspec(property(get=__get_SetterArr, put=__set_SetterArr))  SetterArr;

constexpr void __set_SetterArr(System::Action_2<TClass,::ArrayW<double_t>> value) ;

constexpr System::Action_2<TClass,::ArrayW<double_t>> __get_SetterArr() const;


// Methods

/// @brief Method ReadArrayHelper addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<double_t> ReadArrayHelper(TClass inf, LiteNetLib::Utils::NetDataReader r) ;

/// @brief Method WriteArrayHelper addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<double_t> WriteArrayHelper(TClass inf, LiteNetLib::Utils::NetDataWriter w) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
 void Init(System::Reflection::MethodInfo getMethod, System::Reflection::MethodInfo setMethod, bool isArray) ;

static LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,double_t> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib::Utils
// Type: ::FastCallSpecific`2
namespace LiteNetLib::Utils {
// cpp template
template<::cordl_internals::il2cpp_reference_type TClass>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14490), inst: 1891 }), TypeDefinitionIndex(TypeDefinitionIndex(14490)), TypeDefinitionIndex(TypeDefinitionIndex(14491))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14491), inst: 6259 })
// CS Name: LiteNetLib.Utils.NetSerializer::FastCallSpecific`2
class CORDL_TYPE LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,char16_t> : public LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCall_1<TClass> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~LiteNetLib__Utils__NetSerializer__FastCallSpecific_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__Utils__NetSerializer__FastCallSpecific_2", modifiers: " const&", def_value: None }]
constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecific_2(LiteNetLib__Utils__NetSerializer__FastCallSpecific_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__Utils__NetSerializer__FastCallSpecific_2", modifiers: "&&", def_value: None }]
constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecific_2(LiteNetLib__Utils__NetSerializer__FastCallSpecific_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LiteNetLib__Utils__NetSerializer__FastCallSpecific_2(void* ptr) noexcept : LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCall_1<TClass>(ptr) {
}


  constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecific_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecific_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecific_2& operator=(LiteNetLib__Utils__NetSerializer__FastCallSpecific_2&& o) noexcept = default;
  constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecific_2& operator=(LiteNetLib__Utils__NetSerializer__FastCallSpecific_2 const& o) noexcept = default;
                


// Fields

 System::Func_2<TClass,char16_t> __declspec(property(get=__get_Getter, put=__set_Getter))  Getter;

constexpr void __set_Getter(System::Func_2<TClass,char16_t> value) ;

constexpr System::Func_2<TClass,char16_t> __get_Getter() const;

 System::Action_2<TClass,char16_t> __declspec(property(get=__get_Setter, put=__set_Setter))  Setter;

constexpr void __set_Setter(System::Action_2<TClass,char16_t> value) ;

constexpr System::Action_2<TClass,char16_t> __get_Setter() const;

 System::Func_2<TClass,::ArrayW<char16_t>> __declspec(property(get=__get_GetterArr, put=__set_GetterArr))  GetterArr;

constexpr void __set_GetterArr(System::Func_2<TClass,::ArrayW<char16_t>> value) ;

constexpr System::Func_2<TClass,::ArrayW<char16_t>> __get_GetterArr() const;

 System::Action_2<TClass,::ArrayW<char16_t>> __declspec(property(get=__get_SetterArr, put=__set_SetterArr))  SetterArr;

constexpr void __set_SetterArr(System::Action_2<TClass,::ArrayW<char16_t>> value) ;

constexpr System::Action_2<TClass,::ArrayW<char16_t>> __get_SetterArr() const;


// Methods

/// @brief Method ReadArrayHelper addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<char16_t> ReadArrayHelper(TClass inf, LiteNetLib::Utils::NetDataReader r) ;

/// @brief Method WriteArrayHelper addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<char16_t> WriteArrayHelper(TClass inf, LiteNetLib::Utils::NetDataWriter w) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
 void Init(System::Reflection::MethodInfo getMethod, System::Reflection::MethodInfo setMethod, bool isArray) ;

static LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,char16_t> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib::Utils
// Type: ::FastCallSpecific`2
namespace LiteNetLib::Utils {
// cpp template
template<::cordl_internals::il2cpp_reference_type TClass,::cordl_internals::is_or_is_backed_by<uint32_t> TProperty>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14491)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14490), inst: 1891 }), TypeDefinitionIndex(TypeDefinitionIndex(14490))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14491), inst: 1557 })
// CS Name: LiteNetLib.Utils.NetSerializer::FastCallSpecific`2
class CORDL_TYPE LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty> : public LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCall_1<TClass> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~LiteNetLib__Utils__NetSerializer__FastCallSpecific_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__Utils__NetSerializer__FastCallSpecific_2", modifiers: " const&", def_value: None }]
constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecific_2(LiteNetLib__Utils__NetSerializer__FastCallSpecific_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__Utils__NetSerializer__FastCallSpecific_2", modifiers: "&&", def_value: None }]
constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecific_2(LiteNetLib__Utils__NetSerializer__FastCallSpecific_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LiteNetLib__Utils__NetSerializer__FastCallSpecific_2(void* ptr) noexcept : LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCall_1<TClass>(ptr) {
}


  constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecific_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecific_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecific_2& operator=(LiteNetLib__Utils__NetSerializer__FastCallSpecific_2&& o) noexcept = default;
  constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecific_2& operator=(LiteNetLib__Utils__NetSerializer__FastCallSpecific_2 const& o) noexcept = default;
                


// Fields

 System::Func_2<TClass,TProperty> __declspec(property(get=__get_Getter, put=__set_Getter))  Getter;

constexpr void __set_Getter(System::Func_2<TClass,TProperty> value) ;

constexpr System::Func_2<TClass,TProperty> __get_Getter() const;

 System::Action_2<TClass,TProperty> __declspec(property(get=__get_Setter, put=__set_Setter))  Setter;

constexpr void __set_Setter(System::Action_2<TClass,TProperty> value) ;

constexpr System::Action_2<TClass,TProperty> __get_Setter() const;

 System::Func_2<TClass,::ArrayW<TProperty>> __declspec(property(get=__get_GetterArr, put=__set_GetterArr))  GetterArr;

constexpr void __set_GetterArr(System::Func_2<TClass,::ArrayW<TProperty>> value) ;

constexpr System::Func_2<TClass,::ArrayW<TProperty>> __get_GetterArr() const;

 System::Action_2<TClass,::ArrayW<TProperty>> __declspec(property(get=__get_SetterArr, put=__set_SetterArr))  SetterArr;

constexpr void __set_SetterArr(System::Action_2<TClass,::ArrayW<TProperty>> value) ;

constexpr System::Action_2<TClass,::ArrayW<TProperty>> __get_SetterArr() const;


// Methods

/// @brief Method ReadArrayHelper addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<TProperty> ReadArrayHelper(TClass inf, LiteNetLib::Utils::NetDataReader r) ;

/// @brief Method WriteArrayHelper addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<TProperty> WriteArrayHelper(TClass inf, LiteNetLib::Utils::NetDataWriter w) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
 void Init(System::Reflection::MethodInfo getMethod, System::Reflection::MethodInfo setMethod, bool isArray) ;

static LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib::Utils
// Type: ::FastCallSpecific`2
namespace LiteNetLib::Utils {
// cpp template
template<::cordl_internals::il2cpp_reference_type TClass>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14490)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14490), inst: 1891 }), TypeDefinitionIndex(TypeDefinitionIndex(14491))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14491), inst: 1553 })
// CS Name: LiteNetLib.Utils.NetSerializer::FastCallSpecific`2
class CORDL_TYPE LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,float_t> : public LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCall_1<TClass> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~LiteNetLib__Utils__NetSerializer__FastCallSpecific_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__Utils__NetSerializer__FastCallSpecific_2", modifiers: " const&", def_value: None }]
constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecific_2(LiteNetLib__Utils__NetSerializer__FastCallSpecific_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__Utils__NetSerializer__FastCallSpecific_2", modifiers: "&&", def_value: None }]
constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecific_2(LiteNetLib__Utils__NetSerializer__FastCallSpecific_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LiteNetLib__Utils__NetSerializer__FastCallSpecific_2(void* ptr) noexcept : LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCall_1<TClass>(ptr) {
}


  constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecific_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecific_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecific_2& operator=(LiteNetLib__Utils__NetSerializer__FastCallSpecific_2&& o) noexcept = default;
  constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecific_2& operator=(LiteNetLib__Utils__NetSerializer__FastCallSpecific_2 const& o) noexcept = default;
                


// Fields

 System::Func_2<TClass,float_t> __declspec(property(get=__get_Getter, put=__set_Getter))  Getter;

constexpr void __set_Getter(System::Func_2<TClass,float_t> value) ;

constexpr System::Func_2<TClass,float_t> __get_Getter() const;

 System::Action_2<TClass,float_t> __declspec(property(get=__get_Setter, put=__set_Setter))  Setter;

constexpr void __set_Setter(System::Action_2<TClass,float_t> value) ;

constexpr System::Action_2<TClass,float_t> __get_Setter() const;

 System::Func_2<TClass,::ArrayW<float_t>> __declspec(property(get=__get_GetterArr, put=__set_GetterArr))  GetterArr;

constexpr void __set_GetterArr(System::Func_2<TClass,::ArrayW<float_t>> value) ;

constexpr System::Func_2<TClass,::ArrayW<float_t>> __get_GetterArr() const;

 System::Action_2<TClass,::ArrayW<float_t>> __declspec(property(get=__get_SetterArr, put=__set_SetterArr))  SetterArr;

constexpr void __set_SetterArr(System::Action_2<TClass,::ArrayW<float_t>> value) ;

constexpr System::Action_2<TClass,::ArrayW<float_t>> __get_SetterArr() const;


// Methods

/// @brief Method ReadArrayHelper addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<float_t> ReadArrayHelper(TClass inf, LiteNetLib::Utils::NetDataReader r) ;

/// @brief Method WriteArrayHelper addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<float_t> WriteArrayHelper(TClass inf, LiteNetLib::Utils::NetDataWriter w) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
 void Init(System::Reflection::MethodInfo getMethod, System::Reflection::MethodInfo setMethod, bool isArray) ;

static LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,float_t> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib::Utils
// Type: ::FastCallSpecific`2
namespace LiteNetLib::Utils {
// cpp template
template<::cordl_internals::il2cpp_reference_type TClass,::cordl_internals::is_or_is_backed_by<int64_t> TProperty>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14490), inst: 1891 }), TypeDefinitionIndex(TypeDefinitionIndex(14491)), TypeDefinitionIndex(TypeDefinitionIndex(14490))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14491), inst: 1550 })
// CS Name: LiteNetLib.Utils.NetSerializer::FastCallSpecific`2
class CORDL_TYPE LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty> : public LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCall_1<TClass> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~LiteNetLib__Utils__NetSerializer__FastCallSpecific_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__Utils__NetSerializer__FastCallSpecific_2", modifiers: " const&", def_value: None }]
constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecific_2(LiteNetLib__Utils__NetSerializer__FastCallSpecific_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__Utils__NetSerializer__FastCallSpecific_2", modifiers: "&&", def_value: None }]
constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecific_2(LiteNetLib__Utils__NetSerializer__FastCallSpecific_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LiteNetLib__Utils__NetSerializer__FastCallSpecific_2(void* ptr) noexcept : LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCall_1<TClass>(ptr) {
}


  constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecific_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecific_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecific_2& operator=(LiteNetLib__Utils__NetSerializer__FastCallSpecific_2&& o) noexcept = default;
  constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecific_2& operator=(LiteNetLib__Utils__NetSerializer__FastCallSpecific_2 const& o) noexcept = default;
                


// Fields

 System::Func_2<TClass,TProperty> __declspec(property(get=__get_Getter, put=__set_Getter))  Getter;

constexpr void __set_Getter(System::Func_2<TClass,TProperty> value) ;

constexpr System::Func_2<TClass,TProperty> __get_Getter() const;

 System::Action_2<TClass,TProperty> __declspec(property(get=__get_Setter, put=__set_Setter))  Setter;

constexpr void __set_Setter(System::Action_2<TClass,TProperty> value) ;

constexpr System::Action_2<TClass,TProperty> __get_Setter() const;

 System::Func_2<TClass,::ArrayW<TProperty>> __declspec(property(get=__get_GetterArr, put=__set_GetterArr))  GetterArr;

constexpr void __set_GetterArr(System::Func_2<TClass,::ArrayW<TProperty>> value) ;

constexpr System::Func_2<TClass,::ArrayW<TProperty>> __get_GetterArr() const;

 System::Action_2<TClass,::ArrayW<TProperty>> __declspec(property(get=__get_SetterArr, put=__set_SetterArr))  SetterArr;

constexpr void __set_SetterArr(System::Action_2<TClass,::ArrayW<TProperty>> value) ;

constexpr System::Action_2<TClass,::ArrayW<TProperty>> __get_SetterArr() const;


// Methods

/// @brief Method ReadArrayHelper addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<TProperty> ReadArrayHelper(TClass inf, LiteNetLib::Utils::NetDataReader r) ;

/// @brief Method WriteArrayHelper addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<TProperty> WriteArrayHelper(TClass inf, LiteNetLib::Utils::NetDataWriter w) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
 void Init(System::Reflection::MethodInfo getMethod, System::Reflection::MethodInfo setMethod, bool isArray) ;

static LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib::Utils
// Type: ::FastCallSpecific`2
namespace LiteNetLib::Utils {
// cpp template
template<::cordl_internals::il2cpp_reference_type TClass,::cordl_internals::is_or_is_backed_by<int32_t> TProperty>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14490)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14490), inst: 1891 }), TypeDefinitionIndex(TypeDefinitionIndex(14491))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14491), inst: 1548 })
// CS Name: LiteNetLib.Utils.NetSerializer::FastCallSpecific`2
class CORDL_TYPE LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty> : public LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCall_1<TClass> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~LiteNetLib__Utils__NetSerializer__FastCallSpecific_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__Utils__NetSerializer__FastCallSpecific_2", modifiers: " const&", def_value: None }]
constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecific_2(LiteNetLib__Utils__NetSerializer__FastCallSpecific_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__Utils__NetSerializer__FastCallSpecific_2", modifiers: "&&", def_value: None }]
constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecific_2(LiteNetLib__Utils__NetSerializer__FastCallSpecific_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LiteNetLib__Utils__NetSerializer__FastCallSpecific_2(void* ptr) noexcept : LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCall_1<TClass>(ptr) {
}


  constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecific_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecific_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecific_2& operator=(LiteNetLib__Utils__NetSerializer__FastCallSpecific_2&& o) noexcept = default;
  constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecific_2& operator=(LiteNetLib__Utils__NetSerializer__FastCallSpecific_2 const& o) noexcept = default;
                


// Fields

 System::Func_2<TClass,TProperty> __declspec(property(get=__get_Getter, put=__set_Getter))  Getter;

constexpr void __set_Getter(System::Func_2<TClass,TProperty> value) ;

constexpr System::Func_2<TClass,TProperty> __get_Getter() const;

 System::Action_2<TClass,TProperty> __declspec(property(get=__get_Setter, put=__set_Setter))  Setter;

constexpr void __set_Setter(System::Action_2<TClass,TProperty> value) ;

constexpr System::Action_2<TClass,TProperty> __get_Setter() const;

 System::Func_2<TClass,::ArrayW<TProperty>> __declspec(property(get=__get_GetterArr, put=__set_GetterArr))  GetterArr;

constexpr void __set_GetterArr(System::Func_2<TClass,::ArrayW<TProperty>> value) ;

constexpr System::Func_2<TClass,::ArrayW<TProperty>> __get_GetterArr() const;

 System::Action_2<TClass,::ArrayW<TProperty>> __declspec(property(get=__get_SetterArr, put=__set_SetterArr))  SetterArr;

constexpr void __set_SetterArr(System::Action_2<TClass,::ArrayW<TProperty>> value) ;

constexpr System::Action_2<TClass,::ArrayW<TProperty>> __get_SetterArr() const;


// Methods

/// @brief Method ReadArrayHelper addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<TProperty> ReadArrayHelper(TClass inf, LiteNetLib::Utils::NetDataReader r) ;

/// @brief Method WriteArrayHelper addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<TProperty> WriteArrayHelper(TClass inf, LiteNetLib::Utils::NetDataWriter w) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
 void Init(System::Reflection::MethodInfo getMethod, System::Reflection::MethodInfo setMethod, bool isArray) ;

static LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib::Utils
// Type: ::FastCallSpecific`2
namespace LiteNetLib::Utils {
// cpp template
template<::cordl_internals::il2cpp_reference_type TClass,::cordl_internals::is_or_is_backed_by<uint8_t> TProperty>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14491)), TypeDefinitionIndex(TypeDefinitionIndex(14490)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14490), inst: 1891 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14491), inst: 1545 })
// CS Name: LiteNetLib.Utils.NetSerializer::FastCallSpecific`2
class CORDL_TYPE LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty> : public LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCall_1<TClass> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~LiteNetLib__Utils__NetSerializer__FastCallSpecific_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__Utils__NetSerializer__FastCallSpecific_2", modifiers: " const&", def_value: None }]
constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecific_2(LiteNetLib__Utils__NetSerializer__FastCallSpecific_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__Utils__NetSerializer__FastCallSpecific_2", modifiers: "&&", def_value: None }]
constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecific_2(LiteNetLib__Utils__NetSerializer__FastCallSpecific_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LiteNetLib__Utils__NetSerializer__FastCallSpecific_2(void* ptr) noexcept : LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCall_1<TClass>(ptr) {
}


  constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecific_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecific_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecific_2& operator=(LiteNetLib__Utils__NetSerializer__FastCallSpecific_2&& o) noexcept = default;
  constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecific_2& operator=(LiteNetLib__Utils__NetSerializer__FastCallSpecific_2 const& o) noexcept = default;
                


// Fields

 System::Func_2<TClass,TProperty> __declspec(property(get=__get_Getter, put=__set_Getter))  Getter;

constexpr void __set_Getter(System::Func_2<TClass,TProperty> value) ;

constexpr System::Func_2<TClass,TProperty> __get_Getter() const;

 System::Action_2<TClass,TProperty> __declspec(property(get=__get_Setter, put=__set_Setter))  Setter;

constexpr void __set_Setter(System::Action_2<TClass,TProperty> value) ;

constexpr System::Action_2<TClass,TProperty> __get_Setter() const;

 System::Func_2<TClass,::ArrayW<TProperty>> __declspec(property(get=__get_GetterArr, put=__set_GetterArr))  GetterArr;

constexpr void __set_GetterArr(System::Func_2<TClass,::ArrayW<TProperty>> value) ;

constexpr System::Func_2<TClass,::ArrayW<TProperty>> __get_GetterArr() const;

 System::Action_2<TClass,::ArrayW<TProperty>> __declspec(property(get=__get_SetterArr, put=__set_SetterArr))  SetterArr;

constexpr void __set_SetterArr(System::Action_2<TClass,::ArrayW<TProperty>> value) ;

constexpr System::Action_2<TClass,::ArrayW<TProperty>> __get_SetterArr() const;


// Methods

/// @brief Method ReadArrayHelper addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<TProperty> ReadArrayHelper(TClass inf, LiteNetLib::Utils::NetDataReader r) ;

/// @brief Method WriteArrayHelper addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<TProperty> WriteArrayHelper(TClass inf, LiteNetLib::Utils::NetDataWriter w) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
 void Init(System::Reflection::MethodInfo getMethod, System::Reflection::MethodInfo setMethod, bool isArray) ;

static LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib::Utils
// Type: ::FastCallSpecific`2
namespace LiteNetLib::Utils {
// cpp template
template<::cordl_internals::il2cpp_reference_type TClass>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14490), inst: 1891 }), TypeDefinitionIndex(TypeDefinitionIndex(14491)), TypeDefinitionIndex(TypeDefinitionIndex(14490))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14491), inst: 1544 })
// CS Name: LiteNetLib.Utils.NetSerializer::FastCallSpecific`2
class CORDL_TYPE LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,bool> : public LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCall_1<TClass> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~LiteNetLib__Utils__NetSerializer__FastCallSpecific_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__Utils__NetSerializer__FastCallSpecific_2", modifiers: " const&", def_value: None }]
constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecific_2(LiteNetLib__Utils__NetSerializer__FastCallSpecific_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__Utils__NetSerializer__FastCallSpecific_2", modifiers: "&&", def_value: None }]
constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecific_2(LiteNetLib__Utils__NetSerializer__FastCallSpecific_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LiteNetLib__Utils__NetSerializer__FastCallSpecific_2(void* ptr) noexcept : LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCall_1<TClass>(ptr) {
}


  constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecific_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecific_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecific_2& operator=(LiteNetLib__Utils__NetSerializer__FastCallSpecific_2&& o) noexcept = default;
  constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecific_2& operator=(LiteNetLib__Utils__NetSerializer__FastCallSpecific_2 const& o) noexcept = default;
                


// Fields

 System::Func_2<TClass,bool> __declspec(property(get=__get_Getter, put=__set_Getter))  Getter;

constexpr void __set_Getter(System::Func_2<TClass,bool> value) ;

constexpr System::Func_2<TClass,bool> __get_Getter() const;

 System::Action_2<TClass,bool> __declspec(property(get=__get_Setter, put=__set_Setter))  Setter;

constexpr void __set_Setter(System::Action_2<TClass,bool> value) ;

constexpr System::Action_2<TClass,bool> __get_Setter() const;

 System::Func_2<TClass,::ArrayW<bool>> __declspec(property(get=__get_GetterArr, put=__set_GetterArr))  GetterArr;

constexpr void __set_GetterArr(System::Func_2<TClass,::ArrayW<bool>> value) ;

constexpr System::Func_2<TClass,::ArrayW<bool>> __get_GetterArr() const;

 System::Action_2<TClass,::ArrayW<bool>> __declspec(property(get=__get_SetterArr, put=__set_SetterArr))  SetterArr;

constexpr void __set_SetterArr(System::Action_2<TClass,::ArrayW<bool>> value) ;

constexpr System::Action_2<TClass,::ArrayW<bool>> __get_SetterArr() const;


// Methods

/// @brief Method ReadArrayHelper addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<bool> ReadArrayHelper(TClass inf, LiteNetLib::Utils::NetDataReader r) ;

/// @brief Method WriteArrayHelper addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<bool> WriteArrayHelper(TClass inf, LiteNetLib::Utils::NetDataWriter w) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
 void Init(System::Reflection::MethodInfo getMethod, System::Reflection::MethodInfo setMethod, bool isArray) ;

static LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,bool> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib::Utils
// Type: ::FastCallSpecific`2
namespace LiteNetLib::Utils {
// cpp template
template<::cordl_internals::il2cpp_reference_type TClass,::cordl_internals::il2cpp_reference_type TProperty>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14490)), TypeDefinitionIndex(TypeDefinitionIndex(14491)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14490), inst: 1891 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14491), inst: 80 })
// CS Name: LiteNetLib.Utils.NetSerializer::FastCallSpecific`2
class CORDL_TYPE LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty> : public LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCall_1<TClass> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~LiteNetLib__Utils__NetSerializer__FastCallSpecific_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__Utils__NetSerializer__FastCallSpecific_2", modifiers: " const&", def_value: None }]
constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecific_2(LiteNetLib__Utils__NetSerializer__FastCallSpecific_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__Utils__NetSerializer__FastCallSpecific_2", modifiers: "&&", def_value: None }]
constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecific_2(LiteNetLib__Utils__NetSerializer__FastCallSpecific_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LiteNetLib__Utils__NetSerializer__FastCallSpecific_2(void* ptr) noexcept : LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCall_1<TClass>(ptr) {
}


  constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecific_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecific_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecific_2& operator=(LiteNetLib__Utils__NetSerializer__FastCallSpecific_2&& o) noexcept = default;
  constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecific_2& operator=(LiteNetLib__Utils__NetSerializer__FastCallSpecific_2 const& o) noexcept = default;
                


// Fields

 System::Func_2<TClass,TProperty> __declspec(property(get=__get_Getter, put=__set_Getter))  Getter;

constexpr void __set_Getter(System::Func_2<TClass,TProperty> value) ;

constexpr System::Func_2<TClass,TProperty> __get_Getter() const;

 System::Action_2<TClass,TProperty> __declspec(property(get=__get_Setter, put=__set_Setter))  Setter;

constexpr void __set_Setter(System::Action_2<TClass,TProperty> value) ;

constexpr System::Action_2<TClass,TProperty> __get_Setter() const;

 System::Func_2<TClass,::ArrayW<TProperty>> __declspec(property(get=__get_GetterArr, put=__set_GetterArr))  GetterArr;

constexpr void __set_GetterArr(System::Func_2<TClass,::ArrayW<TProperty>> value) ;

constexpr System::Func_2<TClass,::ArrayW<TProperty>> __get_GetterArr() const;

 System::Action_2<TClass,::ArrayW<TProperty>> __declspec(property(get=__get_SetterArr, put=__set_SetterArr))  SetterArr;

constexpr void __set_SetterArr(System::Action_2<TClass,::ArrayW<TProperty>> value) ;

constexpr System::Action_2<TClass,::ArrayW<TProperty>> __get_SetterArr() const;


// Methods

/// @brief Method ReadArrayHelper addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<TProperty> ReadArrayHelper(TClass inf, LiteNetLib::Utils::NetDataReader r) ;

/// @brief Method WriteArrayHelper addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<TProperty> WriteArrayHelper(TClass inf, LiteNetLib::Utils::NetDataWriter w) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
 void Init(System::Reflection::MethodInfo getMethod, System::Reflection::MethodInfo setMethod, bool isArray) ;

static LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib::Utils
// Type: ::FastCallStruct`2
namespace LiteNetLib::Utils {
// cpp template
template<typename TClass,typename TProperty>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14491), inst: 1876 }), TypeDefinitionIndex(TypeDefinitionIndex(14491))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14494))
// CS Name: LiteNetLib.Utils.NetSerializer::FastCallStruct`2
class CORDL_TYPE LiteNetLib__Utils__NetSerializer__FastCallStruct_2 : public LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~LiteNetLib__Utils__NetSerializer__FastCallStruct_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__Utils__NetSerializer__FastCallStruct_2", modifiers: " const&", def_value: None }]
constexpr LiteNetLib__Utils__NetSerializer__FastCallStruct_2(LiteNetLib__Utils__NetSerializer__FastCallStruct_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__Utils__NetSerializer__FastCallStruct_2", modifiers: "&&", def_value: None }]
constexpr LiteNetLib__Utils__NetSerializer__FastCallStruct_2(LiteNetLib__Utils__NetSerializer__FastCallStruct_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LiteNetLib__Utils__NetSerializer__FastCallStruct_2(void* ptr) noexcept : LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>(ptr) {
}


  constexpr LiteNetLib__Utils__NetSerializer__FastCallStruct_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LiteNetLib__Utils__NetSerializer__FastCallStruct_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LiteNetLib__Utils__NetSerializer__FastCallStruct_2& operator=(LiteNetLib__Utils__NetSerializer__FastCallStruct_2&& o) noexcept = default;
  constexpr LiteNetLib__Utils__NetSerializer__FastCallStruct_2& operator=(LiteNetLib__Utils__NetSerializer__FastCallStruct_2 const& o) noexcept = default;
                


// Fields

 TProperty __declspec(property(get=__get__p, put=__set__p))  _p;

constexpr void __set__p(TProperty value) ;

constexpr TProperty __get__p() const;


// Methods

/// @brief Method Read addr 0x0 size 0xffffffffffffffff virtual true final false
 void Read(TClass inf, LiteNetLib::Utils::NetDataReader r) ;

/// @brief Method Write addr 0x0 size 0xffffffffffffffff virtual true final false
 void Write(TClass inf, LiteNetLib::Utils::NetDataWriter w) ;

/// @brief Method ReadArray addr 0x0 size 0xffffffffffffffff virtual true final false
 void ReadArray(TClass inf, LiteNetLib::Utils::NetDataReader r) ;

/// @brief Method WriteArray addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteArray(TClass inf, LiteNetLib::Utils::NetDataWriter w) ;

static LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallStruct_2 New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib::Utils
// Type: ::FastCallClass`2
// Type: ::IntSerializer`1
// Type: ::UIntSerializer`1
// Type: ::ShortSerializer`1
// Type: ::UShortSerializer`1
// Type: ::LongSerializer`1
// Type: ::ULongSerializer`1
// Type: ::ByteSerializer`1
// Type: ::SByteSerializer`1
// Type: ::FloatSerializer`1
// Type: ::DoubleSerializer`1
// Type: ::BoolSerializer`1
// Type: ::CharSerializer`1
// Type: ::IPEndPointSerializer`1
// Type: ::StringSerializer`1
// Type: ::EnumByteSerializer`1
// Type: ::EnumIntSerializer`1
// Type: ::ClassInfo`1
// Type: ::CustomType
namespace LiteNetLib::Utils {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14513))
// CS Name: LiteNetLib.Utils.NetSerializer::CustomType
class CORDL_TYPE LiteNetLib__Utils__NetSerializer__CustomType : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~LiteNetLib__Utils__NetSerializer__CustomType() = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__Utils__NetSerializer__CustomType", modifiers: " const&", def_value: None }]
constexpr LiteNetLib__Utils__NetSerializer__CustomType(LiteNetLib__Utils__NetSerializer__CustomType const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__Utils__NetSerializer__CustomType", modifiers: "&&", def_value: None }]
constexpr LiteNetLib__Utils__NetSerializer__CustomType(LiteNetLib__Utils__NetSerializer__CustomType&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LiteNetLib__Utils__NetSerializer__CustomType(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LiteNetLib__Utils__NetSerializer__CustomType& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LiteNetLib__Utils__NetSerializer__CustomType& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LiteNetLib__Utils__NetSerializer__CustomType& operator=(LiteNetLib__Utils__NetSerializer__CustomType&& o) noexcept = default;
  constexpr LiteNetLib__Utils__NetSerializer__CustomType& operator=(LiteNetLib__Utils__NetSerializer__CustomType const& o) noexcept = default;
                


// Methods

/// @brief Method Get addr 0x0 size 0xffffffffffffffff virtual true final false
template<typename T>
 LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCall_1<T> Get() ;

static LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__CustomType New_ctor() ;

/// @brief Method .ctor addr 0x209944c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib::Utils
// Type: ::CustomTypeStruct`1
namespace LiteNetLib::Utils {
// cpp template
template<typename TProperty>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14513))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14514))
// CS Name: LiteNetLib.Utils.NetSerializer::CustomTypeStruct`1
class CORDL_TYPE LiteNetLib__Utils__NetSerializer__CustomTypeStruct_1 : public LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__CustomType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~LiteNetLib__Utils__NetSerializer__CustomTypeStruct_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__Utils__NetSerializer__CustomTypeStruct_1", modifiers: " const&", def_value: None }]
constexpr LiteNetLib__Utils__NetSerializer__CustomTypeStruct_1(LiteNetLib__Utils__NetSerializer__CustomTypeStruct_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__Utils__NetSerializer__CustomTypeStruct_1", modifiers: "&&", def_value: None }]
constexpr LiteNetLib__Utils__NetSerializer__CustomTypeStruct_1(LiteNetLib__Utils__NetSerializer__CustomTypeStruct_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LiteNetLib__Utils__NetSerializer__CustomTypeStruct_1(void* ptr) noexcept : LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__CustomType(ptr) {
}


  constexpr LiteNetLib__Utils__NetSerializer__CustomTypeStruct_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LiteNetLib__Utils__NetSerializer__CustomTypeStruct_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LiteNetLib__Utils__NetSerializer__CustomTypeStruct_1& operator=(LiteNetLib__Utils__NetSerializer__CustomTypeStruct_1&& o) noexcept = default;
  constexpr LiteNetLib__Utils__NetSerializer__CustomTypeStruct_1& operator=(LiteNetLib__Utils__NetSerializer__CustomTypeStruct_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Get addr 0x0 size 0xffffffffffffffff virtual true final false
template<typename T>
 LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCall_1<T> Get() ;

static LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__CustomTypeStruct_1 New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib::Utils
// Type: ::CustomTypeClass`1
// Type: ::CustomTypeStatic`1
// Type: LiteNetLib.Utils::NetSerializer
namespace LiteNetLib::Utils {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14517))
// CS Name: LiteNetLib.Utils.NetSerializer
class CORDL_TYPE NetSerializer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
template<typename TProperty>
using CustomTypeStatic_1 = LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__CustomTypeStatic_1<TProperty>;

template<typename TProperty>
using CustomTypeClass_1 = LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__CustomTypeClass_1<TProperty>;

template<typename TProperty>
using CustomTypeStruct_1 = LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__CustomTypeStruct_1<TProperty>;

using CustomType = LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__CustomType;

template<typename T>
using ClassInfo_1 = LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__ClassInfo_1<T>;

template<typename T>
using EnumIntSerializer_1 = LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__EnumIntSerializer_1<T>;

template<typename T>
using EnumByteSerializer_1 = LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__EnumByteSerializer_1<T>;

template<typename T>
using StringSerializer_1 = LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__StringSerializer_1<T>;

template<typename T>
using IPEndPointSerializer_1 = LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__IPEndPointSerializer_1<T>;

template<typename T>
using CharSerializer_1 = LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__CharSerializer_1<T>;

template<typename T>
using BoolSerializer_1 = LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__BoolSerializer_1<T>;

template<typename T>
using DoubleSerializer_1 = LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__DoubleSerializer_1<T>;

template<typename T>
using FloatSerializer_1 = LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FloatSerializer_1<T>;

template<typename T>
using SByteSerializer_1 = LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__SByteSerializer_1<T>;

template<typename T>
using ByteSerializer_1 = LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__ByteSerializer_1<T>;

template<typename T>
using ULongSerializer_1 = LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__ULongSerializer_1<T>;

template<typename T>
using LongSerializer_1 = LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__LongSerializer_1<T>;

template<typename T>
using UShortSerializer_1 = LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__UShortSerializer_1<T>;

template<typename T>
using ShortSerializer_1 = LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__ShortSerializer_1<T>;

template<typename T>
using UIntSerializer_1 = LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__UIntSerializer_1<T>;

template<typename T>
using IntSerializer_1 = LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__IntSerializer_1<T>;

template<typename TClass,typename TProperty>
using FastCallClass_2 = LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallClass_2<TClass, TProperty>;

template<typename TClass,typename TProperty>
using FastCallStruct_2 = LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallStruct_2<TClass, TProperty>;

template<typename TClass,typename TProperty>
using FastCallStatic_2 = LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallStatic_2<TClass, TProperty>;

template<typename TClass,typename TProperty>
using FastCallSpecificAuto_2 = LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecificAuto_2<TClass, TProperty>;

template<typename TClass,typename TProperty>
using FastCallSpecific_2 = LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass, TProperty>;

template<typename T>
using FastCall_1 = LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCall_1<T>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~NetSerializer() = default;

// Ctor Parameters [CppParam { name: "", ty: "NetSerializer", modifiers: " const&", def_value: None }]
constexpr NetSerializer(NetSerializer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NetSerializer", modifiers: "&&", def_value: None }]
constexpr NetSerializer(NetSerializer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NetSerializer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NetSerializer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NetSerializer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NetSerializer& operator=(NetSerializer&& o) noexcept = default;
  constexpr NetSerializer& operator=(NetSerializer const& o) noexcept = default;
                


// Fields

 LiteNetLib::Utils::NetDataWriter __declspec(property(get=__get__writer, put=__set__writer))  _writer;

constexpr void __set__writer(LiteNetLib::Utils::NetDataWriter value) ;

constexpr LiteNetLib::Utils::NetDataWriter __get__writer() const;

 int32_t __declspec(property(get=__get__maxStringLength, put=__set__maxStringLength))  _maxStringLength;

constexpr void __set__maxStringLength(int32_t value) ;

constexpr int32_t __get__maxStringLength() const;

 System::Collections::Generic::Dictionary_2<System::Type,LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__CustomType> __declspec(property(get=__get__registeredTypes, put=__set__registeredTypes))  _registeredTypes;

constexpr void __set__registeredTypes(System::Collections::Generic::Dictionary_2<System::Type,LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__CustomType> value) ;

constexpr System::Collections::Generic::Dictionary_2<System::Type,LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__CustomType> __get__registeredTypes() const;


// Methods

/// @brief Method RegisterNestedType addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void RegisterNestedType() ;

/// @brief Method RegisterNestedType addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void RegisterNestedType(System::Func_1<T> constructor) ;

/// @brief Method RegisterNestedType addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void RegisterNestedType(System::Action_2<LiteNetLib::Utils::NetDataWriter,T> writer, System::Func_2<LiteNetLib::Utils::NetDataReader,T> reader) ;

static LiteNetLib::Utils::NetSerializer New_ctor() ;

/// @brief Method .ctor addr 0x2098f24 size 0x8 virtual false final false
 void _ctor() ;

static LiteNetLib::Utils::NetSerializer New_ctor(int32_t maxStringLength) ;

/// @brief Method .ctor addr 0x2099018 size 0x90 virtual false final false
 void _ctor(int32_t maxStringLength) ;

/// @brief Method RegisterInternal addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__ClassInfo_1<T> RegisterInternal() ;

/// @brief Method Register addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void Register() ;

/// @brief Method Deserialize addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 T Deserialize(LiteNetLib::Utils::NetDataReader reader) ;

/// @brief Method Deserialize addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 bool Deserialize(LiteNetLib::Utils::NetDataReader reader, T target) ;

/// @brief Method Serialize addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void Serialize(LiteNetLib::Utils::NetDataWriter writer, T obj) ;

/// @brief Method Serialize addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 ::ArrayW<uint8_t> Serialize(T obj) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib::Utils
// Type: ::FastCallSpecificAuto`2
namespace LiteNetLib::Utils {
// cpp template
template<::cordl_internals::il2cpp_reference_type TClass>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14491), inst: 1874 }), TypeDefinitionIndex(TypeDefinitionIndex(14491)), TypeDefinitionIndex(TypeDefinitionIndex(14492))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14492), inst: 6259 })
// CS Name: LiteNetLib.Utils.NetSerializer::FastCallSpecificAuto`2
class CORDL_TYPE LiteNetLib__Utils__NetSerializer__FastCallSpecificAuto_2<TClass,char16_t> : public LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,char16_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~LiteNetLib__Utils__NetSerializer__FastCallSpecificAuto_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__Utils__NetSerializer__FastCallSpecificAuto_2", modifiers: " const&", def_value: None }]
constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecificAuto_2(LiteNetLib__Utils__NetSerializer__FastCallSpecificAuto_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__Utils__NetSerializer__FastCallSpecificAuto_2", modifiers: "&&", def_value: None }]
constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecificAuto_2(LiteNetLib__Utils__NetSerializer__FastCallSpecificAuto_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LiteNetLib__Utils__NetSerializer__FastCallSpecificAuto_2(void* ptr) noexcept : LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,char16_t>(ptr) {
}


  constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecificAuto_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecificAuto_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecificAuto_2& operator=(LiteNetLib__Utils__NetSerializer__FastCallSpecificAuto_2&& o) noexcept = default;
  constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecificAuto_2& operator=(LiteNetLib__Utils__NetSerializer__FastCallSpecificAuto_2 const& o) noexcept = default;
                


// Methods

/// @brief Method ElementRead addr 0x0 size 0xffffffffffffffff virtual true final false
 void ElementRead(LiteNetLib::Utils::NetDataReader r, ByRef<char16_t> prop) ;

/// @brief Method ElementWrite addr 0x0 size 0xffffffffffffffff virtual true final false
 void ElementWrite(LiteNetLib::Utils::NetDataWriter w, ByRef<char16_t> prop) ;

/// @brief Method Read addr 0x0 size 0xffffffffffffffff virtual true final false
 void Read(TClass inf, LiteNetLib::Utils::NetDataReader r) ;

/// @brief Method Write addr 0x0 size 0xffffffffffffffff virtual true final false
 void Write(TClass inf, LiteNetLib::Utils::NetDataWriter w) ;

/// @brief Method ReadArray addr 0x0 size 0xffffffffffffffff virtual true final false
 void ReadArray(TClass inf, LiteNetLib::Utils::NetDataReader r) ;

/// @brief Method WriteArray addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteArray(TClass inf, LiteNetLib::Utils::NetDataWriter w) ;

static LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecificAuto_2<TClass,char16_t> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib::Utils
// Type: ::FastCallSpecificAuto`2
namespace LiteNetLib::Utils {
// cpp template
template<::cordl_internals::il2cpp_reference_type TClass,::cordl_internals::il2cpp_reference_type TProperty>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14492)), TypeDefinitionIndex(TypeDefinitionIndex(14491)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14491), inst: 1874 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14492), inst: 80 })
// CS Name: LiteNetLib.Utils.NetSerializer::FastCallSpecificAuto`2
class CORDL_TYPE LiteNetLib__Utils__NetSerializer__FastCallSpecificAuto_2<TClass,TProperty> : public LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~LiteNetLib__Utils__NetSerializer__FastCallSpecificAuto_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__Utils__NetSerializer__FastCallSpecificAuto_2", modifiers: " const&", def_value: None }]
constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecificAuto_2(LiteNetLib__Utils__NetSerializer__FastCallSpecificAuto_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__Utils__NetSerializer__FastCallSpecificAuto_2", modifiers: "&&", def_value: None }]
constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecificAuto_2(LiteNetLib__Utils__NetSerializer__FastCallSpecificAuto_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LiteNetLib__Utils__NetSerializer__FastCallSpecificAuto_2(void* ptr) noexcept : LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>(ptr) {
}


  constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecificAuto_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecificAuto_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecificAuto_2& operator=(LiteNetLib__Utils__NetSerializer__FastCallSpecificAuto_2&& o) noexcept = default;
  constexpr LiteNetLib__Utils__NetSerializer__FastCallSpecificAuto_2& operator=(LiteNetLib__Utils__NetSerializer__FastCallSpecificAuto_2 const& o) noexcept = default;
                


// Methods

/// @brief Method ElementRead addr 0x0 size 0xffffffffffffffff virtual true final false
 void ElementRead(LiteNetLib::Utils::NetDataReader r, ByRef<TProperty> prop) ;

/// @brief Method ElementWrite addr 0x0 size 0xffffffffffffffff virtual true final false
 void ElementWrite(LiteNetLib::Utils::NetDataWriter w, ByRef<TProperty> prop) ;

/// @brief Method Read addr 0x0 size 0xffffffffffffffff virtual true final false
 void Read(TClass inf, LiteNetLib::Utils::NetDataReader r) ;

/// @brief Method Write addr 0x0 size 0xffffffffffffffff virtual true final false
 void Write(TClass inf, LiteNetLib::Utils::NetDataWriter w) ;

/// @brief Method ReadArray addr 0x0 size 0xffffffffffffffff virtual true final false
 void ReadArray(TClass inf, LiteNetLib::Utils::NetDataReader r) ;

/// @brief Method WriteArray addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteArray(TClass inf, LiteNetLib::Utils::NetDataWriter w) ;

static LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecificAuto_2<TClass,TProperty> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib::Utils
// Type: ::FastCallStatic`2
namespace LiteNetLib::Utils {
// cpp template
template<::cordl_internals::il2cpp_reference_type TClass,::cordl_internals::il2cpp_reference_type TProperty>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14491), inst: 1875 }), TypeDefinitionIndex(TypeDefinitionIndex(14493)), TypeDefinitionIndex(TypeDefinitionIndex(14491))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14493), inst: 80 })
// CS Name: LiteNetLib.Utils.NetSerializer::FastCallStatic`2
class CORDL_TYPE LiteNetLib__Utils__NetSerializer__FastCallStatic_2<TClass,TProperty> : public LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~LiteNetLib__Utils__NetSerializer__FastCallStatic_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__Utils__NetSerializer__FastCallStatic_2", modifiers: " const&", def_value: None }]
constexpr LiteNetLib__Utils__NetSerializer__FastCallStatic_2(LiteNetLib__Utils__NetSerializer__FastCallStatic_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__Utils__NetSerializer__FastCallStatic_2", modifiers: "&&", def_value: None }]
constexpr LiteNetLib__Utils__NetSerializer__FastCallStatic_2(LiteNetLib__Utils__NetSerializer__FastCallStatic_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LiteNetLib__Utils__NetSerializer__FastCallStatic_2(void* ptr) noexcept : LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>(ptr) {
}


  constexpr LiteNetLib__Utils__NetSerializer__FastCallStatic_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LiteNetLib__Utils__NetSerializer__FastCallStatic_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LiteNetLib__Utils__NetSerializer__FastCallStatic_2& operator=(LiteNetLib__Utils__NetSerializer__FastCallStatic_2&& o) noexcept = default;
  constexpr LiteNetLib__Utils__NetSerializer__FastCallStatic_2& operator=(LiteNetLib__Utils__NetSerializer__FastCallStatic_2 const& o) noexcept = default;
                


// Fields

 System::Action_2<LiteNetLib::Utils::NetDataWriter,TProperty> __declspec(property(get=__get__writer, put=__set__writer))  _writer;

constexpr void __set__writer(System::Action_2<LiteNetLib::Utils::NetDataWriter,TProperty> value) ;

constexpr System::Action_2<LiteNetLib::Utils::NetDataWriter,TProperty> __get__writer() const;

 System::Func_2<LiteNetLib::Utils::NetDataReader,TProperty> __declspec(property(get=__get__reader, put=__set__reader))  _reader;

constexpr void __set__reader(System::Func_2<LiteNetLib::Utils::NetDataReader,TProperty> value) ;

constexpr System::Func_2<LiteNetLib::Utils::NetDataReader,TProperty> __get__reader() const;


// Methods

static LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallStatic_2<TClass,TProperty> New_ctor(System::Action_2<LiteNetLib::Utils::NetDataWriter,TProperty> write, System::Func_2<LiteNetLib::Utils::NetDataReader,TProperty> read) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Action_2<LiteNetLib::Utils::NetDataWriter,TProperty> write, System::Func_2<LiteNetLib::Utils::NetDataReader,TProperty> read) ;

/// @brief Method Read addr 0x0 size 0xffffffffffffffff virtual true final false
 void Read(TClass inf, LiteNetLib::Utils::NetDataReader r) ;

/// @brief Method Write addr 0x0 size 0xffffffffffffffff virtual true final false
 void Write(TClass inf, LiteNetLib::Utils::NetDataWriter w) ;

/// @brief Method ReadArray addr 0x0 size 0xffffffffffffffff virtual true final false
 void ReadArray(TClass inf, LiteNetLib::Utils::NetDataReader r) ;

/// @brief Method WriteArray addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteArray(TClass inf, LiteNetLib::Utils::NetDataWriter w) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib::Utils
// Type: ::FastCallClass`2
namespace LiteNetLib::Utils {
// cpp template
template<::cordl_internals::il2cpp_reference_type TClass,::cordl_internals::il2cpp_reference_type TProperty>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14491)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14491), inst: 1873 }), TypeDefinitionIndex(TypeDefinitionIndex(14495))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14495), inst: 80 })
// CS Name: LiteNetLib.Utils.NetSerializer::FastCallClass`2
class CORDL_TYPE LiteNetLib__Utils__NetSerializer__FastCallClass_2<TClass,TProperty> : public LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~LiteNetLib__Utils__NetSerializer__FastCallClass_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__Utils__NetSerializer__FastCallClass_2", modifiers: " const&", def_value: None }]
constexpr LiteNetLib__Utils__NetSerializer__FastCallClass_2(LiteNetLib__Utils__NetSerializer__FastCallClass_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__Utils__NetSerializer__FastCallClass_2", modifiers: "&&", def_value: None }]
constexpr LiteNetLib__Utils__NetSerializer__FastCallClass_2(LiteNetLib__Utils__NetSerializer__FastCallClass_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LiteNetLib__Utils__NetSerializer__FastCallClass_2(void* ptr) noexcept : LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>(ptr) {
}


  constexpr LiteNetLib__Utils__NetSerializer__FastCallClass_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LiteNetLib__Utils__NetSerializer__FastCallClass_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LiteNetLib__Utils__NetSerializer__FastCallClass_2& operator=(LiteNetLib__Utils__NetSerializer__FastCallClass_2&& o) noexcept = default;
  constexpr LiteNetLib__Utils__NetSerializer__FastCallClass_2& operator=(LiteNetLib__Utils__NetSerializer__FastCallClass_2 const& o) noexcept = default;
                


// Fields

 System::Func_1<TProperty> __declspec(property(get=__get__constructor, put=__set__constructor))  _constructor;

constexpr void __set__constructor(System::Func_1<TProperty> value) ;

constexpr System::Func_1<TProperty> __get__constructor() const;


// Methods

static LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallClass_2<TClass,TProperty> New_ctor(System::Func_1<TProperty> constructor) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Func_1<TProperty> constructor) ;

/// @brief Method Read addr 0x0 size 0xffffffffffffffff virtual true final false
 void Read(TClass inf, LiteNetLib::Utils::NetDataReader r) ;

/// @brief Method Write addr 0x0 size 0xffffffffffffffff virtual true final false
 void Write(TClass inf, LiteNetLib::Utils::NetDataWriter w) ;

/// @brief Method ReadArray addr 0x0 size 0xffffffffffffffff virtual true final false
 void ReadArray(TClass inf, LiteNetLib::Utils::NetDataReader r) ;

/// @brief Method WriteArray addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteArray(TClass inf, LiteNetLib::Utils::NetDataWriter w) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib::Utils
// Type: ::IntSerializer`1
namespace LiteNetLib::Utils {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14496)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14491), inst: 1878 }), TypeDefinitionIndex(TypeDefinitionIndex(14491))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14496), inst: 2 })
// CS Name: LiteNetLib.Utils.NetSerializer::IntSerializer`1
class CORDL_TYPE LiteNetLib__Utils__NetSerializer__IntSerializer_1<T> : public LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<T,int32_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~LiteNetLib__Utils__NetSerializer__IntSerializer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__Utils__NetSerializer__IntSerializer_1", modifiers: " const&", def_value: None }]
constexpr LiteNetLib__Utils__NetSerializer__IntSerializer_1(LiteNetLib__Utils__NetSerializer__IntSerializer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__Utils__NetSerializer__IntSerializer_1", modifiers: "&&", def_value: None }]
constexpr LiteNetLib__Utils__NetSerializer__IntSerializer_1(LiteNetLib__Utils__NetSerializer__IntSerializer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LiteNetLib__Utils__NetSerializer__IntSerializer_1(void* ptr) noexcept : LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<T,int32_t>(ptr) {
}


  constexpr LiteNetLib__Utils__NetSerializer__IntSerializer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LiteNetLib__Utils__NetSerializer__IntSerializer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LiteNetLib__Utils__NetSerializer__IntSerializer_1& operator=(LiteNetLib__Utils__NetSerializer__IntSerializer_1&& o) noexcept = default;
  constexpr LiteNetLib__Utils__NetSerializer__IntSerializer_1& operator=(LiteNetLib__Utils__NetSerializer__IntSerializer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Read addr 0x0 size 0xffffffffffffffff virtual true final false
 void Read(T inf, LiteNetLib::Utils::NetDataReader r) ;

/// @brief Method Write addr 0x0 size 0xffffffffffffffff virtual true final false
 void Write(T inf, LiteNetLib::Utils::NetDataWriter w) ;

/// @brief Method ReadArray addr 0x0 size 0xffffffffffffffff virtual true final false
 void ReadArray(T inf, LiteNetLib::Utils::NetDataReader r) ;

/// @brief Method WriteArray addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteArray(T inf, LiteNetLib::Utils::NetDataWriter w) ;

static LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__IntSerializer_1<T> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib::Utils
// Type: ::UIntSerializer`1
namespace LiteNetLib::Utils {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14497)), TypeDefinitionIndex(TypeDefinitionIndex(14491)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14491), inst: 1883 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14497), inst: 2 })
// CS Name: LiteNetLib.Utils.NetSerializer::UIntSerializer`1
class CORDL_TYPE LiteNetLib__Utils__NetSerializer__UIntSerializer_1<T> : public LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<T,uint32_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~LiteNetLib__Utils__NetSerializer__UIntSerializer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__Utils__NetSerializer__UIntSerializer_1", modifiers: " const&", def_value: None }]
constexpr LiteNetLib__Utils__NetSerializer__UIntSerializer_1(LiteNetLib__Utils__NetSerializer__UIntSerializer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__Utils__NetSerializer__UIntSerializer_1", modifiers: "&&", def_value: None }]
constexpr LiteNetLib__Utils__NetSerializer__UIntSerializer_1(LiteNetLib__Utils__NetSerializer__UIntSerializer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LiteNetLib__Utils__NetSerializer__UIntSerializer_1(void* ptr) noexcept : LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<T,uint32_t>(ptr) {
}


  constexpr LiteNetLib__Utils__NetSerializer__UIntSerializer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LiteNetLib__Utils__NetSerializer__UIntSerializer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LiteNetLib__Utils__NetSerializer__UIntSerializer_1& operator=(LiteNetLib__Utils__NetSerializer__UIntSerializer_1&& o) noexcept = default;
  constexpr LiteNetLib__Utils__NetSerializer__UIntSerializer_1& operator=(LiteNetLib__Utils__NetSerializer__UIntSerializer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Read addr 0x0 size 0xffffffffffffffff virtual true final false
 void Read(T inf, LiteNetLib::Utils::NetDataReader r) ;

/// @brief Method Write addr 0x0 size 0xffffffffffffffff virtual true final false
 void Write(T inf, LiteNetLib::Utils::NetDataWriter w) ;

/// @brief Method ReadArray addr 0x0 size 0xffffffffffffffff virtual true final false
 void ReadArray(T inf, LiteNetLib::Utils::NetDataReader r) ;

/// @brief Method WriteArray addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteArray(T inf, LiteNetLib::Utils::NetDataWriter w) ;

static LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__UIntSerializer_1<T> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib::Utils
// Type: ::ShortSerializer`1
namespace LiteNetLib::Utils {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14491)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14491), inst: 1881 }), TypeDefinitionIndex(TypeDefinitionIndex(14498))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14498), inst: 2 })
// CS Name: LiteNetLib.Utils.NetSerializer::ShortSerializer`1
class CORDL_TYPE LiteNetLib__Utils__NetSerializer__ShortSerializer_1<T> : public LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<T,int16_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~LiteNetLib__Utils__NetSerializer__ShortSerializer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__Utils__NetSerializer__ShortSerializer_1", modifiers: " const&", def_value: None }]
constexpr LiteNetLib__Utils__NetSerializer__ShortSerializer_1(LiteNetLib__Utils__NetSerializer__ShortSerializer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__Utils__NetSerializer__ShortSerializer_1", modifiers: "&&", def_value: None }]
constexpr LiteNetLib__Utils__NetSerializer__ShortSerializer_1(LiteNetLib__Utils__NetSerializer__ShortSerializer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LiteNetLib__Utils__NetSerializer__ShortSerializer_1(void* ptr) noexcept : LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<T,int16_t>(ptr) {
}


  constexpr LiteNetLib__Utils__NetSerializer__ShortSerializer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LiteNetLib__Utils__NetSerializer__ShortSerializer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LiteNetLib__Utils__NetSerializer__ShortSerializer_1& operator=(LiteNetLib__Utils__NetSerializer__ShortSerializer_1&& o) noexcept = default;
  constexpr LiteNetLib__Utils__NetSerializer__ShortSerializer_1& operator=(LiteNetLib__Utils__NetSerializer__ShortSerializer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Read addr 0x0 size 0xffffffffffffffff virtual true final false
 void Read(T inf, LiteNetLib::Utils::NetDataReader r) ;

/// @brief Method Write addr 0x0 size 0xffffffffffffffff virtual true final false
 void Write(T inf, LiteNetLib::Utils::NetDataWriter w) ;

/// @brief Method ReadArray addr 0x0 size 0xffffffffffffffff virtual true final false
 void ReadArray(T inf, LiteNetLib::Utils::NetDataReader r) ;

/// @brief Method WriteArray addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteArray(T inf, LiteNetLib::Utils::NetDataWriter w) ;

static LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__ShortSerializer_1<T> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib::Utils
// Type: ::UShortSerializer`1
namespace LiteNetLib::Utils {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14491)), TypeDefinitionIndex(TypeDefinitionIndex(14499)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14491), inst: 1885 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14499), inst: 2 })
// CS Name: LiteNetLib.Utils.NetSerializer::UShortSerializer`1
class CORDL_TYPE LiteNetLib__Utils__NetSerializer__UShortSerializer_1<T> : public LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<T,uint16_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~LiteNetLib__Utils__NetSerializer__UShortSerializer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__Utils__NetSerializer__UShortSerializer_1", modifiers: " const&", def_value: None }]
constexpr LiteNetLib__Utils__NetSerializer__UShortSerializer_1(LiteNetLib__Utils__NetSerializer__UShortSerializer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__Utils__NetSerializer__UShortSerializer_1", modifiers: "&&", def_value: None }]
constexpr LiteNetLib__Utils__NetSerializer__UShortSerializer_1(LiteNetLib__Utils__NetSerializer__UShortSerializer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LiteNetLib__Utils__NetSerializer__UShortSerializer_1(void* ptr) noexcept : LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<T,uint16_t>(ptr) {
}


  constexpr LiteNetLib__Utils__NetSerializer__UShortSerializer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LiteNetLib__Utils__NetSerializer__UShortSerializer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LiteNetLib__Utils__NetSerializer__UShortSerializer_1& operator=(LiteNetLib__Utils__NetSerializer__UShortSerializer_1&& o) noexcept = default;
  constexpr LiteNetLib__Utils__NetSerializer__UShortSerializer_1& operator=(LiteNetLib__Utils__NetSerializer__UShortSerializer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Read addr 0x0 size 0xffffffffffffffff virtual true final false
 void Read(T inf, LiteNetLib::Utils::NetDataReader r) ;

/// @brief Method Write addr 0x0 size 0xffffffffffffffff virtual true final false
 void Write(T inf, LiteNetLib::Utils::NetDataWriter w) ;

/// @brief Method ReadArray addr 0x0 size 0xffffffffffffffff virtual true final false
 void ReadArray(T inf, LiteNetLib::Utils::NetDataReader r) ;

/// @brief Method WriteArray addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteArray(T inf, LiteNetLib::Utils::NetDataWriter w) ;

static LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__UShortSerializer_1<T> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib::Utils
// Type: ::LongSerializer`1
namespace LiteNetLib::Utils {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14491)), TypeDefinitionIndex(TypeDefinitionIndex(14500)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14491), inst: 1879 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14500), inst: 2 })
// CS Name: LiteNetLib.Utils.NetSerializer::LongSerializer`1
class CORDL_TYPE LiteNetLib__Utils__NetSerializer__LongSerializer_1<T> : public LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<T,int64_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~LiteNetLib__Utils__NetSerializer__LongSerializer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__Utils__NetSerializer__LongSerializer_1", modifiers: " const&", def_value: None }]
constexpr LiteNetLib__Utils__NetSerializer__LongSerializer_1(LiteNetLib__Utils__NetSerializer__LongSerializer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__Utils__NetSerializer__LongSerializer_1", modifiers: "&&", def_value: None }]
constexpr LiteNetLib__Utils__NetSerializer__LongSerializer_1(LiteNetLib__Utils__NetSerializer__LongSerializer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LiteNetLib__Utils__NetSerializer__LongSerializer_1(void* ptr) noexcept : LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<T,int64_t>(ptr) {
}


  constexpr LiteNetLib__Utils__NetSerializer__LongSerializer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LiteNetLib__Utils__NetSerializer__LongSerializer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LiteNetLib__Utils__NetSerializer__LongSerializer_1& operator=(LiteNetLib__Utils__NetSerializer__LongSerializer_1&& o) noexcept = default;
  constexpr LiteNetLib__Utils__NetSerializer__LongSerializer_1& operator=(LiteNetLib__Utils__NetSerializer__LongSerializer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Read addr 0x0 size 0xffffffffffffffff virtual true final false
 void Read(T inf, LiteNetLib::Utils::NetDataReader r) ;

/// @brief Method Write addr 0x0 size 0xffffffffffffffff virtual true final false
 void Write(T inf, LiteNetLib::Utils::NetDataWriter w) ;

/// @brief Method ReadArray addr 0x0 size 0xffffffffffffffff virtual true final false
 void ReadArray(T inf, LiteNetLib::Utils::NetDataReader r) ;

/// @brief Method WriteArray addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteArray(T inf, LiteNetLib::Utils::NetDataWriter w) ;

static LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__LongSerializer_1<T> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib::Utils
// Type: ::ULongSerializer`1
namespace LiteNetLib::Utils {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14491), inst: 1884 }), TypeDefinitionIndex(TypeDefinitionIndex(14501)), TypeDefinitionIndex(TypeDefinitionIndex(14491))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14501), inst: 2 })
// CS Name: LiteNetLib.Utils.NetSerializer::ULongSerializer`1
class CORDL_TYPE LiteNetLib__Utils__NetSerializer__ULongSerializer_1<T> : public LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<T,uint64_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~LiteNetLib__Utils__NetSerializer__ULongSerializer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__Utils__NetSerializer__ULongSerializer_1", modifiers: " const&", def_value: None }]
constexpr LiteNetLib__Utils__NetSerializer__ULongSerializer_1(LiteNetLib__Utils__NetSerializer__ULongSerializer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__Utils__NetSerializer__ULongSerializer_1", modifiers: "&&", def_value: None }]
constexpr LiteNetLib__Utils__NetSerializer__ULongSerializer_1(LiteNetLib__Utils__NetSerializer__ULongSerializer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LiteNetLib__Utils__NetSerializer__ULongSerializer_1(void* ptr) noexcept : LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<T,uint64_t>(ptr) {
}


  constexpr LiteNetLib__Utils__NetSerializer__ULongSerializer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LiteNetLib__Utils__NetSerializer__ULongSerializer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LiteNetLib__Utils__NetSerializer__ULongSerializer_1& operator=(LiteNetLib__Utils__NetSerializer__ULongSerializer_1&& o) noexcept = default;
  constexpr LiteNetLib__Utils__NetSerializer__ULongSerializer_1& operator=(LiteNetLib__Utils__NetSerializer__ULongSerializer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Read addr 0x0 size 0xffffffffffffffff virtual true final false
 void Read(T inf, LiteNetLib::Utils::NetDataReader r) ;

/// @brief Method Write addr 0x0 size 0xffffffffffffffff virtual true final false
 void Write(T inf, LiteNetLib::Utils::NetDataWriter w) ;

/// @brief Method ReadArray addr 0x0 size 0xffffffffffffffff virtual true final false
 void ReadArray(T inf, LiteNetLib::Utils::NetDataReader r) ;

/// @brief Method WriteArray addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteArray(T inf, LiteNetLib::Utils::NetDataWriter w) ;

static LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__ULongSerializer_1<T> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib::Utils
// Type: ::ByteSerializer`1
namespace LiteNetLib::Utils {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14491)), TypeDefinitionIndex(TypeDefinitionIndex(14502)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14491), inst: 1871 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14502), inst: 2 })
// CS Name: LiteNetLib.Utils.NetSerializer::ByteSerializer`1
class CORDL_TYPE LiteNetLib__Utils__NetSerializer__ByteSerializer_1<T> : public LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<T,uint8_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~LiteNetLib__Utils__NetSerializer__ByteSerializer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__Utils__NetSerializer__ByteSerializer_1", modifiers: " const&", def_value: None }]
constexpr LiteNetLib__Utils__NetSerializer__ByteSerializer_1(LiteNetLib__Utils__NetSerializer__ByteSerializer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__Utils__NetSerializer__ByteSerializer_1", modifiers: "&&", def_value: None }]
constexpr LiteNetLib__Utils__NetSerializer__ByteSerializer_1(LiteNetLib__Utils__NetSerializer__ByteSerializer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LiteNetLib__Utils__NetSerializer__ByteSerializer_1(void* ptr) noexcept : LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<T,uint8_t>(ptr) {
}


  constexpr LiteNetLib__Utils__NetSerializer__ByteSerializer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LiteNetLib__Utils__NetSerializer__ByteSerializer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LiteNetLib__Utils__NetSerializer__ByteSerializer_1& operator=(LiteNetLib__Utils__NetSerializer__ByteSerializer_1&& o) noexcept = default;
  constexpr LiteNetLib__Utils__NetSerializer__ByteSerializer_1& operator=(LiteNetLib__Utils__NetSerializer__ByteSerializer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Read addr 0x0 size 0xffffffffffffffff virtual true final false
 void Read(T inf, LiteNetLib::Utils::NetDataReader r) ;

/// @brief Method Write addr 0x0 size 0xffffffffffffffff virtual true final false
 void Write(T inf, LiteNetLib::Utils::NetDataWriter w) ;

/// @brief Method ReadArray addr 0x0 size 0xffffffffffffffff virtual true final false
 void ReadArray(T inf, LiteNetLib::Utils::NetDataReader r) ;

/// @brief Method WriteArray addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteArray(T inf, LiteNetLib::Utils::NetDataWriter w) ;

static LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__ByteSerializer_1<T> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib::Utils
// Type: ::SByteSerializer`1
namespace LiteNetLib::Utils {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14503)), TypeDefinitionIndex(TypeDefinitionIndex(14491)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14491), inst: 1880 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14503), inst: 2 })
// CS Name: LiteNetLib.Utils.NetSerializer::SByteSerializer`1
class CORDL_TYPE LiteNetLib__Utils__NetSerializer__SByteSerializer_1<T> : public LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<T,int8_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~LiteNetLib__Utils__NetSerializer__SByteSerializer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__Utils__NetSerializer__SByteSerializer_1", modifiers: " const&", def_value: None }]
constexpr LiteNetLib__Utils__NetSerializer__SByteSerializer_1(LiteNetLib__Utils__NetSerializer__SByteSerializer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__Utils__NetSerializer__SByteSerializer_1", modifiers: "&&", def_value: None }]
constexpr LiteNetLib__Utils__NetSerializer__SByteSerializer_1(LiteNetLib__Utils__NetSerializer__SByteSerializer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LiteNetLib__Utils__NetSerializer__SByteSerializer_1(void* ptr) noexcept : LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<T,int8_t>(ptr) {
}


  constexpr LiteNetLib__Utils__NetSerializer__SByteSerializer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LiteNetLib__Utils__NetSerializer__SByteSerializer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LiteNetLib__Utils__NetSerializer__SByteSerializer_1& operator=(LiteNetLib__Utils__NetSerializer__SByteSerializer_1&& o) noexcept = default;
  constexpr LiteNetLib__Utils__NetSerializer__SByteSerializer_1& operator=(LiteNetLib__Utils__NetSerializer__SByteSerializer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Read addr 0x0 size 0xffffffffffffffff virtual true final false
 void Read(T inf, LiteNetLib::Utils::NetDataReader r) ;

/// @brief Method Write addr 0x0 size 0xffffffffffffffff virtual true final false
 void Write(T inf, LiteNetLib::Utils::NetDataWriter w) ;

/// @brief Method ReadArray addr 0x0 size 0xffffffffffffffff virtual true final false
 void ReadArray(T inf, LiteNetLib::Utils::NetDataReader r) ;

/// @brief Method WriteArray addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteArray(T inf, LiteNetLib::Utils::NetDataWriter w) ;

static LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__SByteSerializer_1<T> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib::Utils
// Type: ::FloatSerializer`1
namespace LiteNetLib::Utils {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14491)), TypeDefinitionIndex(TypeDefinitionIndex(14504)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14491), inst: 1877 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14504), inst: 2 })
// CS Name: LiteNetLib.Utils.NetSerializer::FloatSerializer`1
class CORDL_TYPE LiteNetLib__Utils__NetSerializer__FloatSerializer_1<T> : public LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<T,float_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~LiteNetLib__Utils__NetSerializer__FloatSerializer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__Utils__NetSerializer__FloatSerializer_1", modifiers: " const&", def_value: None }]
constexpr LiteNetLib__Utils__NetSerializer__FloatSerializer_1(LiteNetLib__Utils__NetSerializer__FloatSerializer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__Utils__NetSerializer__FloatSerializer_1", modifiers: "&&", def_value: None }]
constexpr LiteNetLib__Utils__NetSerializer__FloatSerializer_1(LiteNetLib__Utils__NetSerializer__FloatSerializer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LiteNetLib__Utils__NetSerializer__FloatSerializer_1(void* ptr) noexcept : LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<T,float_t>(ptr) {
}


  constexpr LiteNetLib__Utils__NetSerializer__FloatSerializer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LiteNetLib__Utils__NetSerializer__FloatSerializer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LiteNetLib__Utils__NetSerializer__FloatSerializer_1& operator=(LiteNetLib__Utils__NetSerializer__FloatSerializer_1&& o) noexcept = default;
  constexpr LiteNetLib__Utils__NetSerializer__FloatSerializer_1& operator=(LiteNetLib__Utils__NetSerializer__FloatSerializer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Read addr 0x0 size 0xffffffffffffffff virtual true final false
 void Read(T inf, LiteNetLib::Utils::NetDataReader r) ;

/// @brief Method Write addr 0x0 size 0xffffffffffffffff virtual true final false
 void Write(T inf, LiteNetLib::Utils::NetDataWriter w) ;

/// @brief Method ReadArray addr 0x0 size 0xffffffffffffffff virtual true final false
 void ReadArray(T inf, LiteNetLib::Utils::NetDataReader r) ;

/// @brief Method WriteArray addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteArray(T inf, LiteNetLib::Utils::NetDataWriter w) ;

static LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FloatSerializer_1<T> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib::Utils
// Type: ::DoubleSerializer`1
namespace LiteNetLib::Utils {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14491), inst: 1872 }), TypeDefinitionIndex(TypeDefinitionIndex(14505)), TypeDefinitionIndex(TypeDefinitionIndex(14491))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14505), inst: 2 })
// CS Name: LiteNetLib.Utils.NetSerializer::DoubleSerializer`1
class CORDL_TYPE LiteNetLib__Utils__NetSerializer__DoubleSerializer_1<T> : public LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<T,double_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~LiteNetLib__Utils__NetSerializer__DoubleSerializer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__Utils__NetSerializer__DoubleSerializer_1", modifiers: " const&", def_value: None }]
constexpr LiteNetLib__Utils__NetSerializer__DoubleSerializer_1(LiteNetLib__Utils__NetSerializer__DoubleSerializer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__Utils__NetSerializer__DoubleSerializer_1", modifiers: "&&", def_value: None }]
constexpr LiteNetLib__Utils__NetSerializer__DoubleSerializer_1(LiteNetLib__Utils__NetSerializer__DoubleSerializer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LiteNetLib__Utils__NetSerializer__DoubleSerializer_1(void* ptr) noexcept : LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<T,double_t>(ptr) {
}


  constexpr LiteNetLib__Utils__NetSerializer__DoubleSerializer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LiteNetLib__Utils__NetSerializer__DoubleSerializer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LiteNetLib__Utils__NetSerializer__DoubleSerializer_1& operator=(LiteNetLib__Utils__NetSerializer__DoubleSerializer_1&& o) noexcept = default;
  constexpr LiteNetLib__Utils__NetSerializer__DoubleSerializer_1& operator=(LiteNetLib__Utils__NetSerializer__DoubleSerializer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Read addr 0x0 size 0xffffffffffffffff virtual true final false
 void Read(T inf, LiteNetLib::Utils::NetDataReader r) ;

/// @brief Method Write addr 0x0 size 0xffffffffffffffff virtual true final false
 void Write(T inf, LiteNetLib::Utils::NetDataWriter w) ;

/// @brief Method ReadArray addr 0x0 size 0xffffffffffffffff virtual true final false
 void ReadArray(T inf, LiteNetLib::Utils::NetDataReader r) ;

/// @brief Method WriteArray addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteArray(T inf, LiteNetLib::Utils::NetDataWriter w) ;

static LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__DoubleSerializer_1<T> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib::Utils
// Type: ::BoolSerializer`1
namespace LiteNetLib::Utils {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14491), inst: 1870 }), TypeDefinitionIndex(TypeDefinitionIndex(14491)), TypeDefinitionIndex(TypeDefinitionIndex(14506))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14506), inst: 2 })
// CS Name: LiteNetLib.Utils.NetSerializer::BoolSerializer`1
class CORDL_TYPE LiteNetLib__Utils__NetSerializer__BoolSerializer_1<T> : public LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<T,bool> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~LiteNetLib__Utils__NetSerializer__BoolSerializer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__Utils__NetSerializer__BoolSerializer_1", modifiers: " const&", def_value: None }]
constexpr LiteNetLib__Utils__NetSerializer__BoolSerializer_1(LiteNetLib__Utils__NetSerializer__BoolSerializer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__Utils__NetSerializer__BoolSerializer_1", modifiers: "&&", def_value: None }]
constexpr LiteNetLib__Utils__NetSerializer__BoolSerializer_1(LiteNetLib__Utils__NetSerializer__BoolSerializer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LiteNetLib__Utils__NetSerializer__BoolSerializer_1(void* ptr) noexcept : LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<T,bool>(ptr) {
}


  constexpr LiteNetLib__Utils__NetSerializer__BoolSerializer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LiteNetLib__Utils__NetSerializer__BoolSerializer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LiteNetLib__Utils__NetSerializer__BoolSerializer_1& operator=(LiteNetLib__Utils__NetSerializer__BoolSerializer_1&& o) noexcept = default;
  constexpr LiteNetLib__Utils__NetSerializer__BoolSerializer_1& operator=(LiteNetLib__Utils__NetSerializer__BoolSerializer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Read addr 0x0 size 0xffffffffffffffff virtual true final false
 void Read(T inf, LiteNetLib::Utils::NetDataReader r) ;

/// @brief Method Write addr 0x0 size 0xffffffffffffffff virtual true final false
 void Write(T inf, LiteNetLib::Utils::NetDataWriter w) ;

/// @brief Method ReadArray addr 0x0 size 0xffffffffffffffff virtual true final false
 void ReadArray(T inf, LiteNetLib::Utils::NetDataReader r) ;

/// @brief Method WriteArray addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteArray(T inf, LiteNetLib::Utils::NetDataWriter w) ;

static LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__BoolSerializer_1<T> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib::Utils
// Type: ::CharSerializer`1
namespace LiteNetLib::Utils {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14492), inst: 1868 }), TypeDefinitionIndex(TypeDefinitionIndex(14492)), TypeDefinitionIndex(TypeDefinitionIndex(14507))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14507), inst: 2 })
// CS Name: LiteNetLib.Utils.NetSerializer::CharSerializer`1
class CORDL_TYPE LiteNetLib__Utils__NetSerializer__CharSerializer_1<T> : public LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecificAuto_2<T,char16_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~LiteNetLib__Utils__NetSerializer__CharSerializer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__Utils__NetSerializer__CharSerializer_1", modifiers: " const&", def_value: None }]
constexpr LiteNetLib__Utils__NetSerializer__CharSerializer_1(LiteNetLib__Utils__NetSerializer__CharSerializer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__Utils__NetSerializer__CharSerializer_1", modifiers: "&&", def_value: None }]
constexpr LiteNetLib__Utils__NetSerializer__CharSerializer_1(LiteNetLib__Utils__NetSerializer__CharSerializer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LiteNetLib__Utils__NetSerializer__CharSerializer_1(void* ptr) noexcept : LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecificAuto_2<T,char16_t>(ptr) {
}


  constexpr LiteNetLib__Utils__NetSerializer__CharSerializer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LiteNetLib__Utils__NetSerializer__CharSerializer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LiteNetLib__Utils__NetSerializer__CharSerializer_1& operator=(LiteNetLib__Utils__NetSerializer__CharSerializer_1&& o) noexcept = default;
  constexpr LiteNetLib__Utils__NetSerializer__CharSerializer_1& operator=(LiteNetLib__Utils__NetSerializer__CharSerializer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method ElementWrite addr 0x0 size 0xffffffffffffffff virtual true final false
 void ElementWrite(LiteNetLib::Utils::NetDataWriter w, ByRef<char16_t> prop) ;

/// @brief Method ElementRead addr 0x0 size 0xffffffffffffffff virtual true final false
 void ElementRead(LiteNetLib::Utils::NetDataReader r, ByRef<char16_t> prop) ;

static LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__CharSerializer_1<T> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib::Utils
// Type: ::IPEndPointSerializer`1
namespace LiteNetLib::Utils {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14508)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14492), inst: 1869 }), TypeDefinitionIndex(TypeDefinitionIndex(7883)), TypeDefinitionIndex(TypeDefinitionIndex(14492))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14508), inst: 2 })
// CS Name: LiteNetLib.Utils.NetSerializer::IPEndPointSerializer`1
class CORDL_TYPE LiteNetLib__Utils__NetSerializer__IPEndPointSerializer_1<T> : public LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecificAuto_2<T,System::Net::IPEndPoint> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~LiteNetLib__Utils__NetSerializer__IPEndPointSerializer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__Utils__NetSerializer__IPEndPointSerializer_1", modifiers: " const&", def_value: None }]
constexpr LiteNetLib__Utils__NetSerializer__IPEndPointSerializer_1(LiteNetLib__Utils__NetSerializer__IPEndPointSerializer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__Utils__NetSerializer__IPEndPointSerializer_1", modifiers: "&&", def_value: None }]
constexpr LiteNetLib__Utils__NetSerializer__IPEndPointSerializer_1(LiteNetLib__Utils__NetSerializer__IPEndPointSerializer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LiteNetLib__Utils__NetSerializer__IPEndPointSerializer_1(void* ptr) noexcept : LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecificAuto_2<T,System::Net::IPEndPoint>(ptr) {
}


  constexpr LiteNetLib__Utils__NetSerializer__IPEndPointSerializer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LiteNetLib__Utils__NetSerializer__IPEndPointSerializer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LiteNetLib__Utils__NetSerializer__IPEndPointSerializer_1& operator=(LiteNetLib__Utils__NetSerializer__IPEndPointSerializer_1&& o) noexcept = default;
  constexpr LiteNetLib__Utils__NetSerializer__IPEndPointSerializer_1& operator=(LiteNetLib__Utils__NetSerializer__IPEndPointSerializer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method ElementWrite addr 0x0 size 0xffffffffffffffff virtual true final false
 void ElementWrite(LiteNetLib::Utils::NetDataWriter w, ByRef<System::Net::IPEndPoint> prop) ;

/// @brief Method ElementRead addr 0x0 size 0xffffffffffffffff virtual true final false
 void ElementRead(LiteNetLib::Utils::NetDataReader r, ByRef<System::Net::IPEndPoint> prop) ;

static LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__IPEndPointSerializer_1<T> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib::Utils
// Type: ::StringSerializer`1
namespace LiteNetLib::Utils {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14491), inst: 1882 }), TypeDefinitionIndex(TypeDefinitionIndex(14509)), TypeDefinitionIndex(TypeDefinitionIndex(14491))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14509), inst: 2 })
// CS Name: LiteNetLib.Utils.NetSerializer::StringSerializer`1
class CORDL_TYPE LiteNetLib__Utils__NetSerializer__StringSerializer_1<T> : public LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<T,::StringW> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~LiteNetLib__Utils__NetSerializer__StringSerializer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__Utils__NetSerializer__StringSerializer_1", modifiers: " const&", def_value: None }]
constexpr LiteNetLib__Utils__NetSerializer__StringSerializer_1(LiteNetLib__Utils__NetSerializer__StringSerializer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__Utils__NetSerializer__StringSerializer_1", modifiers: "&&", def_value: None }]
constexpr LiteNetLib__Utils__NetSerializer__StringSerializer_1(LiteNetLib__Utils__NetSerializer__StringSerializer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LiteNetLib__Utils__NetSerializer__StringSerializer_1(void* ptr) noexcept : LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<T,::StringW>(ptr) {
}


  constexpr LiteNetLib__Utils__NetSerializer__StringSerializer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LiteNetLib__Utils__NetSerializer__StringSerializer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LiteNetLib__Utils__NetSerializer__StringSerializer_1& operator=(LiteNetLib__Utils__NetSerializer__StringSerializer_1&& o) noexcept = default;
  constexpr LiteNetLib__Utils__NetSerializer__StringSerializer_1& operator=(LiteNetLib__Utils__NetSerializer__StringSerializer_1 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__maxLength, put=__set__maxLength))  _maxLength;

constexpr void __set__maxLength(int32_t value) ;

constexpr int32_t __get__maxLength() const;


// Methods

static LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__StringSerializer_1<T> New_ctor(int32_t maxLength) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t maxLength) ;

/// @brief Method Read addr 0x0 size 0xffffffffffffffff virtual true final false
 void Read(T inf, LiteNetLib::Utils::NetDataReader r) ;

/// @brief Method Write addr 0x0 size 0xffffffffffffffff virtual true final false
 void Write(T inf, LiteNetLib::Utils::NetDataWriter w) ;

/// @brief Method ReadArray addr 0x0 size 0xffffffffffffffff virtual true final false
 void ReadArray(T inf, LiteNetLib::Utils::NetDataReader r) ;

/// @brief Method WriteArray addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteArray(T inf, LiteNetLib::Utils::NetDataWriter w) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib::Utils
// Type: ::EnumByteSerializer`1
namespace LiteNetLib::Utils {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14510)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14490), inst: 1890 }), TypeDefinitionIndex(TypeDefinitionIndex(14490))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14510), inst: 2 })
// CS Name: LiteNetLib.Utils.NetSerializer::EnumByteSerializer`1
class CORDL_TYPE LiteNetLib__Utils__NetSerializer__EnumByteSerializer_1<T> : public LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCall_1<T> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~LiteNetLib__Utils__NetSerializer__EnumByteSerializer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__Utils__NetSerializer__EnumByteSerializer_1", modifiers: " const&", def_value: None }]
constexpr LiteNetLib__Utils__NetSerializer__EnumByteSerializer_1(LiteNetLib__Utils__NetSerializer__EnumByteSerializer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__Utils__NetSerializer__EnumByteSerializer_1", modifiers: "&&", def_value: None }]
constexpr LiteNetLib__Utils__NetSerializer__EnumByteSerializer_1(LiteNetLib__Utils__NetSerializer__EnumByteSerializer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LiteNetLib__Utils__NetSerializer__EnumByteSerializer_1(void* ptr) noexcept : LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCall_1<T>(ptr) {
}


  constexpr LiteNetLib__Utils__NetSerializer__EnumByteSerializer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LiteNetLib__Utils__NetSerializer__EnumByteSerializer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LiteNetLib__Utils__NetSerializer__EnumByteSerializer_1& operator=(LiteNetLib__Utils__NetSerializer__EnumByteSerializer_1&& o) noexcept = default;
  constexpr LiteNetLib__Utils__NetSerializer__EnumByteSerializer_1& operator=(LiteNetLib__Utils__NetSerializer__EnumByteSerializer_1 const& o) noexcept = default;
                


// Fields

 System::Reflection::PropertyInfo __declspec(property(get=__get_Property, put=__set_Property))  Property;

constexpr void __set_Property(System::Reflection::PropertyInfo value) ;

constexpr System::Reflection::PropertyInfo __get_Property() const;

 System::Type __declspec(property(get=__get_PropertyType, put=__set_PropertyType))  PropertyType;

constexpr void __set_PropertyType(System::Type value) ;

constexpr System::Type __get_PropertyType() const;


// Methods

static LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__EnumByteSerializer_1<T> New_ctor(System::Reflection::PropertyInfo property, System::Type propertyType) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Reflection::PropertyInfo property, System::Type propertyType) ;

/// @brief Method Read addr 0x0 size 0xffffffffffffffff virtual true final false
 void Read(T inf, LiteNetLib::Utils::NetDataReader r) ;

/// @brief Method Write addr 0x0 size 0xffffffffffffffff virtual true final false
 void Write(T inf, LiteNetLib::Utils::NetDataWriter w) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib::Utils
// Type: ::EnumIntSerializer`1
namespace LiteNetLib::Utils {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14510), inst: 1589 }), TypeDefinitionIndex(TypeDefinitionIndex(14510)), TypeDefinitionIndex(TypeDefinitionIndex(14511))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14511), inst: 2 })
// CS Name: LiteNetLib.Utils.NetSerializer::EnumIntSerializer`1
class CORDL_TYPE LiteNetLib__Utils__NetSerializer__EnumIntSerializer_1<T> : public LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__EnumByteSerializer_1<T> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~LiteNetLib__Utils__NetSerializer__EnumIntSerializer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__Utils__NetSerializer__EnumIntSerializer_1", modifiers: " const&", def_value: None }]
constexpr LiteNetLib__Utils__NetSerializer__EnumIntSerializer_1(LiteNetLib__Utils__NetSerializer__EnumIntSerializer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__Utils__NetSerializer__EnumIntSerializer_1", modifiers: "&&", def_value: None }]
constexpr LiteNetLib__Utils__NetSerializer__EnumIntSerializer_1(LiteNetLib__Utils__NetSerializer__EnumIntSerializer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LiteNetLib__Utils__NetSerializer__EnumIntSerializer_1(void* ptr) noexcept : LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__EnumByteSerializer_1<T>(ptr) {
}


  constexpr LiteNetLib__Utils__NetSerializer__EnumIntSerializer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LiteNetLib__Utils__NetSerializer__EnumIntSerializer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LiteNetLib__Utils__NetSerializer__EnumIntSerializer_1& operator=(LiteNetLib__Utils__NetSerializer__EnumIntSerializer_1&& o) noexcept = default;
  constexpr LiteNetLib__Utils__NetSerializer__EnumIntSerializer_1& operator=(LiteNetLib__Utils__NetSerializer__EnumIntSerializer_1 const& o) noexcept = default;
                


// Methods

static LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__EnumIntSerializer_1<T> New_ctor(System::Reflection::PropertyInfo property, System::Type propertyType) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Reflection::PropertyInfo property, System::Type propertyType) ;

/// @brief Method Read addr 0x0 size 0xffffffffffffffff virtual true final false
 void Read(T inf, LiteNetLib::Utils::NetDataReader r) ;

/// @brief Method Write addr 0x0 size 0xffffffffffffffff virtual true final false
 void Write(T inf, LiteNetLib::Utils::NetDataWriter w) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib::Utils
// Type: ::ClassInfo`1
namespace LiteNetLib::Utils {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14512))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14512), inst: 2 })
// CS Name: LiteNetLib.Utils.NetSerializer::ClassInfo`1
class CORDL_TYPE LiteNetLib__Utils__NetSerializer__ClassInfo_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~LiteNetLib__Utils__NetSerializer__ClassInfo_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__Utils__NetSerializer__ClassInfo_1", modifiers: " const&", def_value: None }]
constexpr LiteNetLib__Utils__NetSerializer__ClassInfo_1(LiteNetLib__Utils__NetSerializer__ClassInfo_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__Utils__NetSerializer__ClassInfo_1", modifiers: "&&", def_value: None }]
constexpr LiteNetLib__Utils__NetSerializer__ClassInfo_1(LiteNetLib__Utils__NetSerializer__ClassInfo_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LiteNetLib__Utils__NetSerializer__ClassInfo_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LiteNetLib__Utils__NetSerializer__ClassInfo_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LiteNetLib__Utils__NetSerializer__ClassInfo_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LiteNetLib__Utils__NetSerializer__ClassInfo_1& operator=(LiteNetLib__Utils__NetSerializer__ClassInfo_1&& o) noexcept = default;
  constexpr LiteNetLib__Utils__NetSerializer__ClassInfo_1& operator=(LiteNetLib__Utils__NetSerializer__ClassInfo_1 const& o) noexcept = default;
                


// Fields

static LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__ClassInfo_1<T> __declspec(property(get=__get_Instance, put=__set_Instance))  Instance;

static void __set_Instance(LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__ClassInfo_1<T> value) ;

static LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__ClassInfo_1<T> __get_Instance() ;

 ::ArrayW<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCall_1<T>> __declspec(property(get=__get__serializers, put=__set__serializers))  _serializers;

constexpr void __set__serializers(::ArrayW<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCall_1<T>> value) ;

constexpr ::ArrayW<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCall_1<T>> __get__serializers() const;

 int32_t __declspec(property(get=__get__membersCount, put=__set__membersCount))  _membersCount;

constexpr void __set__membersCount(int32_t value) ;

constexpr int32_t __get__membersCount() const;


// Methods

static LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__ClassInfo_1<T> New_ctor(System::Collections::Generic::List_1<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCall_1<T>> serializers) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Collections::Generic::List_1<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCall_1<T>> serializers) ;

/// @brief Method Write addr 0x0 size 0xffffffffffffffff virtual false final false
 void Write(T obj, LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method Read addr 0x0 size 0xffffffffffffffff virtual false final false
 void Read(T obj, LiteNetLib::Utils::NetDataReader reader) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib::Utils
// Type: ::CustomTypeClass`1
namespace LiteNetLib::Utils {
// cpp template
template<::cordl_internals::il2cpp_reference_type TProperty>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14515)), TypeDefinitionIndex(TypeDefinitionIndex(14513))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14515), inst: 2 })
// CS Name: LiteNetLib.Utils.NetSerializer::CustomTypeClass`1
class CORDL_TYPE LiteNetLib__Utils__NetSerializer__CustomTypeClass_1<TProperty> : public LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__CustomType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~LiteNetLib__Utils__NetSerializer__CustomTypeClass_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__Utils__NetSerializer__CustomTypeClass_1", modifiers: " const&", def_value: None }]
constexpr LiteNetLib__Utils__NetSerializer__CustomTypeClass_1(LiteNetLib__Utils__NetSerializer__CustomTypeClass_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__Utils__NetSerializer__CustomTypeClass_1", modifiers: "&&", def_value: None }]
constexpr LiteNetLib__Utils__NetSerializer__CustomTypeClass_1(LiteNetLib__Utils__NetSerializer__CustomTypeClass_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LiteNetLib__Utils__NetSerializer__CustomTypeClass_1(void* ptr) noexcept : LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__CustomType(ptr) {
}


  constexpr LiteNetLib__Utils__NetSerializer__CustomTypeClass_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LiteNetLib__Utils__NetSerializer__CustomTypeClass_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LiteNetLib__Utils__NetSerializer__CustomTypeClass_1& operator=(LiteNetLib__Utils__NetSerializer__CustomTypeClass_1&& o) noexcept = default;
  constexpr LiteNetLib__Utils__NetSerializer__CustomTypeClass_1& operator=(LiteNetLib__Utils__NetSerializer__CustomTypeClass_1 const& o) noexcept = default;
                


// Fields

 System::Func_1<TProperty> __declspec(property(get=__get__constructor, put=__set__constructor))  _constructor;

constexpr void __set__constructor(System::Func_1<TProperty> value) ;

constexpr System::Func_1<TProperty> __get__constructor() const;


// Methods

static LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__CustomTypeClass_1<TProperty> New_ctor(System::Func_1<TProperty> constructor) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Func_1<TProperty> constructor) ;

/// @brief Method Get addr 0x0 size 0xffffffffffffffff virtual true final false
template<typename T>
 LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCall_1<T> Get() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib::Utils
// Type: ::CustomTypeStatic`1
namespace LiteNetLib::Utils {
// cpp template
template<::cordl_internals::il2cpp_reference_type TProperty>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14516)), TypeDefinitionIndex(TypeDefinitionIndex(14513))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14516), inst: 2 })
// CS Name: LiteNetLib.Utils.NetSerializer::CustomTypeStatic`1
class CORDL_TYPE LiteNetLib__Utils__NetSerializer__CustomTypeStatic_1<TProperty> : public LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__CustomType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~LiteNetLib__Utils__NetSerializer__CustomTypeStatic_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__Utils__NetSerializer__CustomTypeStatic_1", modifiers: " const&", def_value: None }]
constexpr LiteNetLib__Utils__NetSerializer__CustomTypeStatic_1(LiteNetLib__Utils__NetSerializer__CustomTypeStatic_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__Utils__NetSerializer__CustomTypeStatic_1", modifiers: "&&", def_value: None }]
constexpr LiteNetLib__Utils__NetSerializer__CustomTypeStatic_1(LiteNetLib__Utils__NetSerializer__CustomTypeStatic_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LiteNetLib__Utils__NetSerializer__CustomTypeStatic_1(void* ptr) noexcept : LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__CustomType(ptr) {
}


  constexpr LiteNetLib__Utils__NetSerializer__CustomTypeStatic_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LiteNetLib__Utils__NetSerializer__CustomTypeStatic_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LiteNetLib__Utils__NetSerializer__CustomTypeStatic_1& operator=(LiteNetLib__Utils__NetSerializer__CustomTypeStatic_1&& o) noexcept = default;
  constexpr LiteNetLib__Utils__NetSerializer__CustomTypeStatic_1& operator=(LiteNetLib__Utils__NetSerializer__CustomTypeStatic_1 const& o) noexcept = default;
                


// Fields

 System::Action_2<LiteNetLib::Utils::NetDataWriter,TProperty> __declspec(property(get=__get__writer, put=__set__writer))  _writer;

constexpr void __set__writer(System::Action_2<LiteNetLib::Utils::NetDataWriter,TProperty> value) ;

constexpr System::Action_2<LiteNetLib::Utils::NetDataWriter,TProperty> __get__writer() const;

 System::Func_2<LiteNetLib::Utils::NetDataReader,TProperty> __declspec(property(get=__get__reader, put=__set__reader))  _reader;

constexpr void __set__reader(System::Func_2<LiteNetLib::Utils::NetDataReader,TProperty> value) ;

constexpr System::Func_2<LiteNetLib::Utils::NetDataReader,TProperty> __get__reader() const;


// Methods

static LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__CustomTypeStatic_1<TProperty> New_ctor(System::Action_2<LiteNetLib::Utils::NetDataWriter,TProperty> writer, System::Func_2<LiteNetLib::Utils::NetDataReader,TProperty> reader) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Action_2<LiteNetLib::Utils::NetDataWriter,TProperty> writer, System::Func_2<LiteNetLib::Utils::NetDataReader,TProperty> reader) ;

/// @brief Method Get addr 0x0 size 0xffffffffffffffff virtual true final false
template<typename T>
 LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCall_1<T> Get() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib::Utils
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__BoolSerializer_1, "LiteNetLib.Utils", "NetSerializer/BoolSerializer`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__ByteSerializer_1, "LiteNetLib.Utils", "NetSerializer/ByteSerializer`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__CharSerializer_1, "LiteNetLib.Utils", "NetSerializer/CharSerializer`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__ClassInfo_1, "LiteNetLib.Utils", "NetSerializer/ClassInfo`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__CustomTypeClass_1, "LiteNetLib.Utils", "NetSerializer/CustomTypeClass`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__CustomTypeStatic_1, "LiteNetLib.Utils", "NetSerializer/CustomTypeStatic`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__DoubleSerializer_1, "LiteNetLib.Utils", "NetSerializer/DoubleSerializer`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__EnumByteSerializer_1, "LiteNetLib.Utils", "NetSerializer/EnumByteSerializer`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__EnumIntSerializer_1, "LiteNetLib.Utils", "NetSerializer/EnumIntSerializer`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallClass_2, "LiteNetLib.Utils", "NetSerializer/FastCallClass`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecificAuto_2, "LiteNetLib.Utils", "NetSerializer/FastCallSpecificAuto`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2, "LiteNetLib.Utils", "NetSerializer/FastCallSpecific`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallStatic_2, "LiteNetLib.Utils", "NetSerializer/FastCallStatic`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCall_1, "LiteNetLib.Utils", "NetSerializer/FastCall`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FloatSerializer_1, "LiteNetLib.Utils", "NetSerializer/FloatSerializer`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__IPEndPointSerializer_1, "LiteNetLib.Utils", "NetSerializer/IPEndPointSerializer`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__IntSerializer_1, "LiteNetLib.Utils", "NetSerializer/IntSerializer`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__LongSerializer_1, "LiteNetLib.Utils", "NetSerializer/LongSerializer`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__SByteSerializer_1, "LiteNetLib.Utils", "NetSerializer/SByteSerializer`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__ShortSerializer_1, "LiteNetLib.Utils", "NetSerializer/ShortSerializer`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__StringSerializer_1, "LiteNetLib.Utils", "NetSerializer/StringSerializer`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__UIntSerializer_1, "LiteNetLib.Utils", "NetSerializer/UIntSerializer`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__ULongSerializer_1, "LiteNetLib.Utils", "NetSerializer/ULongSerializer`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__UShortSerializer_1, "LiteNetLib.Utils", "NetSerializer/UShortSerializer`1");
NEED_NO_BOX(LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__CustomType);
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__CustomType, "LiteNetLib.Utils", "NetSerializer/CustomType");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__CustomTypeStruct_1, "LiteNetLib.Utils", "NetSerializer/CustomTypeStruct`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallStruct_2, "LiteNetLib.Utils", "NetSerializer/FastCallStruct`2");
NEED_NO_BOX(LiteNetLib::Utils::NetSerializer);
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::Utils::NetSerializer, "LiteNetLib.Utils", "NetSerializer");
