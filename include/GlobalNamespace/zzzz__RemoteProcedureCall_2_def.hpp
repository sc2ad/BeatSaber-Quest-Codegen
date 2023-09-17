#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__RemoteProcedureCall_def.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace GlobalNamespace {
class IRemoteProcedureCall;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace GlobalNamespace {
template<typename T>
class ____GlobalNamespace__RemoteProcedureCall__TypeWrapper_1;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T0,typename T1>
class RemoteProcedureCall_2;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T0>
class RemoteProcedureCall_2<T0,int32_t>;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T0,::cordl_internals::il2cpp_reference_type T1>
class RemoteProcedureCall_2<T0,T1>;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T1>
class RemoteProcedureCall_2<float_t,T1>;
}
// Type: ::RemoteProcedureCall`2
// Type: ::RemoteProcedureCall`2
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T0,::cordl_internals::il2cpp_reference_type T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12875)), TypeDefinitionIndex(TypeDefinitionIndex(12877))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12877), inst: 80 })
// CS Name: RemoteProcedureCall`2
class CORDL_TYPE RemoteProcedureCall_2<T0,T1> : public ::GlobalNamespace::RemoteProcedureCall {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~RemoteProcedureCall_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "RemoteProcedureCall_2", modifiers: " const&", def_value: None }]
constexpr RemoteProcedureCall_2(RemoteProcedureCall_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RemoteProcedureCall_2", modifiers: "&&", def_value: None }]
constexpr RemoteProcedureCall_2(RemoteProcedureCall_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RemoteProcedureCall_2(void* ptr) noexcept : ::GlobalNamespace::RemoteProcedureCall(ptr) {
}


  constexpr RemoteProcedureCall_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RemoteProcedureCall_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RemoteProcedureCall_2& operator=(RemoteProcedureCall_2&& o) noexcept = default;
  constexpr RemoteProcedureCall_2& operator=(RemoteProcedureCall_2 const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::____GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T0> __declspec(property(get=__get__value0, put=__set__value0))  _value0;

constexpr void __set__value0(::GlobalNamespace::____GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T0> value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T0> __get__value0() const;

 ::GlobalNamespace::____GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T1> __declspec(property(get=__get__value1, put=__set__value1))  _value1;

constexpr void __set__value1(::GlobalNamespace::____GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T1> value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T1> __get__value1() const;


// Properties

 T0 __declspec(property(get=get_value0))  value0;

 T1 __declspec(property(get=get_value1))  value1;


// Methods

/// @brief Method get_value0 addr 0x0 size 0xffffffffffffffff virtual false final false
 T0 get_value0() ;

/// @brief Method get_value1 addr 0x0 size 0xffffffffffffffff virtual false final false
 T1 get_value1() ;

/// @brief Method SerializeData addr 0x0 size 0xffffffffffffffff virtual true final false
 void SerializeData(::LiteNetLib::Utils::NetDataWriter writer, uint32_t protocolVersion) ;

/// @brief Method DeserializeData addr 0x0 size 0xffffffffffffffff virtual true final false
 void DeserializeData(::LiteNetLib::Utils::NetDataReader reader, uint32_t protocolVersion) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual false final false
 ::GlobalNamespace::IRemoteProcedureCall Init(float_t syncTime, T0 value0, T1 value1) ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual true final false
 void Release() ;

// Ctor Parameters []
explicit RemoteProcedureCall_2() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::RemoteProcedureCall`2
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T0>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12877)), TypeDefinitionIndex(TypeDefinitionIndex(12875))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12877), inst: 1548 })
// CS Name: RemoteProcedureCall`2
class CORDL_TYPE RemoteProcedureCall_2<T0,int32_t> : public ::GlobalNamespace::RemoteProcedureCall {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~RemoteProcedureCall_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "RemoteProcedureCall_2", modifiers: " const&", def_value: None }]
constexpr RemoteProcedureCall_2(RemoteProcedureCall_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RemoteProcedureCall_2", modifiers: "&&", def_value: None }]
constexpr RemoteProcedureCall_2(RemoteProcedureCall_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RemoteProcedureCall_2(void* ptr) noexcept : ::GlobalNamespace::RemoteProcedureCall(ptr) {
}


  constexpr RemoteProcedureCall_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RemoteProcedureCall_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RemoteProcedureCall_2& operator=(RemoteProcedureCall_2&& o) noexcept = default;
  constexpr RemoteProcedureCall_2& operator=(RemoteProcedureCall_2 const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::____GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T0> __declspec(property(get=__get__value0, put=__set__value0))  _value0;

constexpr void __set__value0(::GlobalNamespace::____GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T0> value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T0> __get__value0() const;

 ::GlobalNamespace::____GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<int32_t> __declspec(property(get=__get__value1, put=__set__value1))  _value1;

constexpr void __set__value1(::GlobalNamespace::____GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<int32_t> value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<int32_t> __get__value1() const;


// Properties

 T0 __declspec(property(get=get_value0))  value0;

 int32_t __declspec(property(get=get_value1))  value1;


// Methods

/// @brief Method get_value0 addr 0x0 size 0xffffffffffffffff virtual false final false
 T0 get_value0() ;

/// @brief Method get_value1 addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_value1() ;

/// @brief Method SerializeData addr 0x0 size 0xffffffffffffffff virtual true final false
 void SerializeData(::LiteNetLib::Utils::NetDataWriter writer, uint32_t protocolVersion) ;

/// @brief Method DeserializeData addr 0x0 size 0xffffffffffffffff virtual true final false
 void DeserializeData(::LiteNetLib::Utils::NetDataReader reader, uint32_t protocolVersion) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual false final false
 ::GlobalNamespace::IRemoteProcedureCall Init(float_t syncTime, T0 value0, int32_t value1) ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual true final false
 void Release() ;

// Ctor Parameters []
explicit RemoteProcedureCall_2() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::RemoteProcedureCall`2
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12875)), TypeDefinitionIndex(TypeDefinitionIndex(12877))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12877), inst: 1568 })
// CS Name: RemoteProcedureCall`2
class CORDL_TYPE RemoteProcedureCall_2<float_t,T1> : public ::GlobalNamespace::RemoteProcedureCall {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~RemoteProcedureCall_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "RemoteProcedureCall_2", modifiers: " const&", def_value: None }]
constexpr RemoteProcedureCall_2(RemoteProcedureCall_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RemoteProcedureCall_2", modifiers: "&&", def_value: None }]
constexpr RemoteProcedureCall_2(RemoteProcedureCall_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RemoteProcedureCall_2(void* ptr) noexcept : ::GlobalNamespace::RemoteProcedureCall(ptr) {
}


  constexpr RemoteProcedureCall_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RemoteProcedureCall_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RemoteProcedureCall_2& operator=(RemoteProcedureCall_2&& o) noexcept = default;
  constexpr RemoteProcedureCall_2& operator=(RemoteProcedureCall_2 const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::____GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<float_t> __declspec(property(get=__get__value0, put=__set__value0))  _value0;

constexpr void __set__value0(::GlobalNamespace::____GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<float_t> value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<float_t> __get__value0() const;

 ::GlobalNamespace::____GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T1> __declspec(property(get=__get__value1, put=__set__value1))  _value1;

constexpr void __set__value1(::GlobalNamespace::____GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T1> value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T1> __get__value1() const;


// Properties

 float_t __declspec(property(get=get_value0))  value0;

 T1 __declspec(property(get=get_value1))  value1;


// Methods

/// @brief Method get_value0 addr 0x0 size 0xffffffffffffffff virtual false final false
 float_t get_value0() ;

/// @brief Method get_value1 addr 0x0 size 0xffffffffffffffff virtual false final false
 T1 get_value1() ;

/// @brief Method SerializeData addr 0x0 size 0xffffffffffffffff virtual true final false
 void SerializeData(::LiteNetLib::Utils::NetDataWriter writer, uint32_t protocolVersion) ;

/// @brief Method DeserializeData addr 0x0 size 0xffffffffffffffff virtual true final false
 void DeserializeData(::LiteNetLib::Utils::NetDataReader reader, uint32_t protocolVersion) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual false final false
 ::GlobalNamespace::IRemoteProcedureCall Init(float_t syncTime, float_t value0, T1 value1) ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual true final false
 void Release() ;

// Ctor Parameters []
explicit RemoteProcedureCall_2() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::RemoteProcedureCall_2, "", "RemoteProcedureCall`2");
