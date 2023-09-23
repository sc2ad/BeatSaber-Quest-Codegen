#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__RemoteProcedureCall_def.hpp"
#include <cmath>
#include <cstdint>
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace GlobalNamespace {
template<typename T>
class GlobalNamespace__RemoteProcedureCall__TypeWrapper_1;
}
namespace GlobalNamespace {
class IRemoteProcedureCall;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T0,typename T1,typename T2>
class RemoteProcedureCall_3;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T0,::cordl_internals::il2cpp_reference_type T1>
class RemoteProcedureCall_3<T0,T1,float_t>;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T0,::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T2>
class RemoteProcedureCall_3<T0,T1,T2>;
}
// Type: ::RemoteProcedureCall`3
// Type: ::RemoteProcedureCall`3
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T0,::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12878)), TypeDefinitionIndex(TypeDefinitionIndex(12875))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12878), inst: 5155 })
// CS Name: RemoteProcedureCall`3
class CORDL_TYPE RemoteProcedureCall_3<T0,T1,T2> : public GlobalNamespace::RemoteProcedureCall {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~RemoteProcedureCall_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "RemoteProcedureCall_3", modifiers: " const&", def_value: None }]
constexpr RemoteProcedureCall_3(RemoteProcedureCall_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RemoteProcedureCall_3", modifiers: "&&", def_value: None }]
constexpr RemoteProcedureCall_3(RemoteProcedureCall_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RemoteProcedureCall_3(void* ptr) noexcept : GlobalNamespace::RemoteProcedureCall(ptr) {
}


  constexpr RemoteProcedureCall_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RemoteProcedureCall_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RemoteProcedureCall_3& operator=(RemoteProcedureCall_3&& o) noexcept = default;
  constexpr RemoteProcedureCall_3& operator=(RemoteProcedureCall_3 const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T0> __declspec(property(get=__get__value0, put=__set__value0))  _value0;

constexpr void __set__value0(GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T0> value) ;

constexpr GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T0> __get__value0() const;

 GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T1> __declspec(property(get=__get__value1, put=__set__value1))  _value1;

constexpr void __set__value1(GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T1> value) ;

constexpr GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T1> __get__value1() const;

 GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T2> __declspec(property(get=__get__value2, put=__set__value2))  _value2;

constexpr void __set__value2(GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T2> value) ;

constexpr GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T2> __get__value2() const;


// Properties

 T0 __declspec(property(get=get_value0))  value0;

 T1 __declspec(property(get=get_value1))  value1;

 T2 __declspec(property(get=get_value2))  value2;


// Methods

/// @brief Method get_value0 addr 0x0 size 0xffffffffffffffff virtual false final false
 T0 get_value0() ;

/// @brief Method get_value1 addr 0x0 size 0xffffffffffffffff virtual false final false
 T1 get_value1() ;

/// @brief Method get_value2 addr 0x0 size 0xffffffffffffffff virtual false final false
 T2 get_value2() ;

/// @brief Method SerializeData addr 0x0 size 0xffffffffffffffff virtual true final false
 void SerializeData(LiteNetLib::Utils::NetDataWriter writer, uint32_t protocolVersion) ;

/// @brief Method DeserializeData addr 0x0 size 0xffffffffffffffff virtual true final false
 void DeserializeData(LiteNetLib::Utils::NetDataReader reader, uint32_t protocolVersion) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual false final false
 GlobalNamespace::IRemoteProcedureCall Init(float_t syncTime, T0 value0, T1 value1, T2 value2) ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual true final false
 void Release() ;

// Ctor Parameters []
explicit RemoteProcedureCall_3() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::RemoteProcedureCall`3
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T0,::cordl_internals::il2cpp_reference_type T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12875)), TypeDefinitionIndex(TypeDefinitionIndex(12878))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12878), inst: 6104 })
// CS Name: RemoteProcedureCall`3
class CORDL_TYPE RemoteProcedureCall_3<T0,T1,float_t> : public GlobalNamespace::RemoteProcedureCall {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~RemoteProcedureCall_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "RemoteProcedureCall_3", modifiers: " const&", def_value: None }]
constexpr RemoteProcedureCall_3(RemoteProcedureCall_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RemoteProcedureCall_3", modifiers: "&&", def_value: None }]
constexpr RemoteProcedureCall_3(RemoteProcedureCall_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RemoteProcedureCall_3(void* ptr) noexcept : GlobalNamespace::RemoteProcedureCall(ptr) {
}


  constexpr RemoteProcedureCall_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RemoteProcedureCall_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RemoteProcedureCall_3& operator=(RemoteProcedureCall_3&& o) noexcept = default;
  constexpr RemoteProcedureCall_3& operator=(RemoteProcedureCall_3 const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T0> __declspec(property(get=__get__value0, put=__set__value0))  _value0;

constexpr void __set__value0(GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T0> value) ;

constexpr GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T0> __get__value0() const;

 GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T1> __declspec(property(get=__get__value1, put=__set__value1))  _value1;

constexpr void __set__value1(GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T1> value) ;

constexpr GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T1> __get__value1() const;

 GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<float_t> __declspec(property(get=__get__value2, put=__set__value2))  _value2;

constexpr void __set__value2(GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<float_t> value) ;

constexpr GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<float_t> __get__value2() const;


// Properties

 T0 __declspec(property(get=get_value0))  value0;

 T1 __declspec(property(get=get_value1))  value1;

 float_t __declspec(property(get=get_value2))  value2;


// Methods

/// @brief Method get_value0 addr 0x0 size 0xffffffffffffffff virtual false final false
 T0 get_value0() ;

/// @brief Method get_value1 addr 0x0 size 0xffffffffffffffff virtual false final false
 T1 get_value1() ;

/// @brief Method get_value2 addr 0x0 size 0xffffffffffffffff virtual false final false
 float_t get_value2() ;

/// @brief Method SerializeData addr 0x0 size 0xffffffffffffffff virtual true final false
 void SerializeData(LiteNetLib::Utils::NetDataWriter writer, uint32_t protocolVersion) ;

/// @brief Method DeserializeData addr 0x0 size 0xffffffffffffffff virtual true final false
 void DeserializeData(LiteNetLib::Utils::NetDataReader reader, uint32_t protocolVersion) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual false final false
 GlobalNamespace::IRemoteProcedureCall Init(float_t syncTime, T0 value0, T1 value1, float_t value2) ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual true final false
 void Release() ;

// Ctor Parameters []
explicit RemoteProcedureCall_3() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::RemoteProcedureCall_3, "", "RemoteProcedureCall`3");
