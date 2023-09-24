#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__RemoteProcedureCall_def.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
struct SongPackMask;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace GlobalNamespace {
template<typename T>
class GlobalNamespace__RemoteProcedureCall__TypeWrapper_1;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace GlobalNamespace {
class IRemoteProcedureCall;
}
namespace System {
struct Int32Enum;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T0>
class RemoteProcedureCall_1;
}
namespace GlobalNamespace {
template<>
class RemoteProcedureCall_1<GlobalNamespace::SongPackMask>;
}
namespace GlobalNamespace {
template<>
class RemoteProcedureCall_1<System::Int32Enum>;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T0>
class RemoteProcedureCall_1<T0>;
}
namespace GlobalNamespace {
template<>
class RemoteProcedureCall_1<bool>;
}
namespace GlobalNamespace {
template<>
class RemoteProcedureCall_1<float_t>;
}
// Type: ::RemoteProcedureCall`1
// Type: ::RemoteProcedureCall`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12876)), TypeDefinitionIndex(TypeDefinitionIndex(12875))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12876), inst: 4825 })
// CS Name: RemoteProcedureCall`1
class CORDL_TYPE RemoteProcedureCall_1<System::Int32Enum> : public GlobalNamespace::RemoteProcedureCall {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~RemoteProcedureCall_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "RemoteProcedureCall_1", modifiers: " const&", def_value: None }]
constexpr RemoteProcedureCall_1(RemoteProcedureCall_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RemoteProcedureCall_1", modifiers: "&&", def_value: None }]
constexpr RemoteProcedureCall_1(RemoteProcedureCall_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RemoteProcedureCall_1(void* ptr) noexcept : GlobalNamespace::RemoteProcedureCall(ptr) {
}


  constexpr RemoteProcedureCall_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RemoteProcedureCall_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RemoteProcedureCall_1& operator=(RemoteProcedureCall_1&& o) noexcept = default;
  constexpr RemoteProcedureCall_1& operator=(RemoteProcedureCall_1 const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<System::Int32Enum> __declspec(property(get=__get__value0, put=__set__value0))  _value0;

constexpr void __set__value0(GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<System::Int32Enum> value) ;

constexpr GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<System::Int32Enum> __get__value0() const;


// Properties

 System::Int32Enum __declspec(property(get=get_value0))  value0;


// Methods

/// @brief Method get_value0 addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Int32Enum get_value0() ;

/// @brief Method SerializeData addr 0x0 size 0xffffffffffffffff virtual true final false
 void SerializeData(LiteNetLib::Utils::NetDataWriter writer, uint32_t protocolVersion) ;

/// @brief Method DeserializeData addr 0x0 size 0xffffffffffffffff virtual true final false
 void DeserializeData(LiteNetLib::Utils::NetDataReader reader, uint32_t protocolVersion) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual false final false
 GlobalNamespace::IRemoteProcedureCall Init(float_t syncTime, System::Int32Enum value0) ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual true final false
 void Release() ;

static GlobalNamespace::RemoteProcedureCall_1<System::Int32Enum> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::RemoteProcedureCall`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12875)), TypeDefinitionIndex(TypeDefinitionIndex(12876))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12876), inst: 3232 })
// CS Name: RemoteProcedureCall`1
class CORDL_TYPE RemoteProcedureCall_1<GlobalNamespace::SongPackMask> : public GlobalNamespace::RemoteProcedureCall {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~RemoteProcedureCall_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "RemoteProcedureCall_1", modifiers: " const&", def_value: None }]
constexpr RemoteProcedureCall_1(RemoteProcedureCall_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RemoteProcedureCall_1", modifiers: "&&", def_value: None }]
constexpr RemoteProcedureCall_1(RemoteProcedureCall_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RemoteProcedureCall_1(void* ptr) noexcept : GlobalNamespace::RemoteProcedureCall(ptr) {
}


  constexpr RemoteProcedureCall_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RemoteProcedureCall_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RemoteProcedureCall_1& operator=(RemoteProcedureCall_1&& o) noexcept = default;
  constexpr RemoteProcedureCall_1& operator=(RemoteProcedureCall_1 const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<GlobalNamespace::SongPackMask> __declspec(property(get=__get__value0, put=__set__value0))  _value0;

constexpr void __set__value0(GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<GlobalNamespace::SongPackMask> value) ;

constexpr GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<GlobalNamespace::SongPackMask> __get__value0() const;


// Properties

 GlobalNamespace::SongPackMask __declspec(property(get=get_value0))  value0;


// Methods

/// @brief Method get_value0 addr 0x0 size 0xffffffffffffffff virtual false final false
 GlobalNamespace::SongPackMask get_value0() ;

/// @brief Method SerializeData addr 0x0 size 0xffffffffffffffff virtual true final false
 void SerializeData(LiteNetLib::Utils::NetDataWriter writer, uint32_t protocolVersion) ;

/// @brief Method DeserializeData addr 0x0 size 0xffffffffffffffff virtual true final false
 void DeserializeData(LiteNetLib::Utils::NetDataReader reader, uint32_t protocolVersion) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual false final false
 GlobalNamespace::IRemoteProcedureCall Init(float_t syncTime, GlobalNamespace::SongPackMask value0) ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual true final false
 void Release() ;

static GlobalNamespace::RemoteProcedureCall_1<GlobalNamespace::SongPackMask> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::RemoteProcedureCall`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12876)), TypeDefinitionIndex(TypeDefinitionIndex(12875))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12876), inst: 374 })
// CS Name: RemoteProcedureCall`1
class CORDL_TYPE RemoteProcedureCall_1<float_t> : public GlobalNamespace::RemoteProcedureCall {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~RemoteProcedureCall_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "RemoteProcedureCall_1", modifiers: " const&", def_value: None }]
constexpr RemoteProcedureCall_1(RemoteProcedureCall_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RemoteProcedureCall_1", modifiers: "&&", def_value: None }]
constexpr RemoteProcedureCall_1(RemoteProcedureCall_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RemoteProcedureCall_1(void* ptr) noexcept : GlobalNamespace::RemoteProcedureCall(ptr) {
}


  constexpr RemoteProcedureCall_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RemoteProcedureCall_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RemoteProcedureCall_1& operator=(RemoteProcedureCall_1&& o) noexcept = default;
  constexpr RemoteProcedureCall_1& operator=(RemoteProcedureCall_1 const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<float_t> __declspec(property(get=__get__value0, put=__set__value0))  _value0;

constexpr void __set__value0(GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<float_t> value) ;

constexpr GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<float_t> __get__value0() const;


// Properties

 float_t __declspec(property(get=get_value0))  value0;


// Methods

/// @brief Method get_value0 addr 0x0 size 0xffffffffffffffff virtual false final false
 float_t get_value0() ;

/// @brief Method SerializeData addr 0x0 size 0xffffffffffffffff virtual true final false
 void SerializeData(LiteNetLib::Utils::NetDataWriter writer, uint32_t protocolVersion) ;

/// @brief Method DeserializeData addr 0x0 size 0xffffffffffffffff virtual true final false
 void DeserializeData(LiteNetLib::Utils::NetDataReader reader, uint32_t protocolVersion) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual false final false
 GlobalNamespace::IRemoteProcedureCall Init(float_t syncTime, float_t value0) ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual true final false
 void Release() ;

static GlobalNamespace::RemoteProcedureCall_1<float_t> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::RemoteProcedureCall`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12876)), TypeDefinitionIndex(TypeDefinitionIndex(12875))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12876), inst: 99 })
// CS Name: RemoteProcedureCall`1
class CORDL_TYPE RemoteProcedureCall_1<bool> : public GlobalNamespace::RemoteProcedureCall {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~RemoteProcedureCall_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "RemoteProcedureCall_1", modifiers: " const&", def_value: None }]
constexpr RemoteProcedureCall_1(RemoteProcedureCall_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RemoteProcedureCall_1", modifiers: "&&", def_value: None }]
constexpr RemoteProcedureCall_1(RemoteProcedureCall_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RemoteProcedureCall_1(void* ptr) noexcept : GlobalNamespace::RemoteProcedureCall(ptr) {
}


  constexpr RemoteProcedureCall_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RemoteProcedureCall_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RemoteProcedureCall_1& operator=(RemoteProcedureCall_1&& o) noexcept = default;
  constexpr RemoteProcedureCall_1& operator=(RemoteProcedureCall_1 const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<bool> __declspec(property(get=__get__value0, put=__set__value0))  _value0;

constexpr void __set__value0(GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<bool> value) ;

constexpr GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<bool> __get__value0() const;


// Properties

 bool __declspec(property(get=get_value0))  value0;


// Methods

/// @brief Method get_value0 addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_value0() ;

/// @brief Method SerializeData addr 0x0 size 0xffffffffffffffff virtual true final false
 void SerializeData(LiteNetLib::Utils::NetDataWriter writer, uint32_t protocolVersion) ;

/// @brief Method DeserializeData addr 0x0 size 0xffffffffffffffff virtual true final false
 void DeserializeData(LiteNetLib::Utils::NetDataReader reader, uint32_t protocolVersion) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual false final false
 GlobalNamespace::IRemoteProcedureCall Init(float_t syncTime, bool value0) ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual true final false
 void Release() ;

static GlobalNamespace::RemoteProcedureCall_1<bool> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::RemoteProcedureCall`1
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T0>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12876)), TypeDefinitionIndex(TypeDefinitionIndex(12875))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12876), inst: 2 })
// CS Name: RemoteProcedureCall`1
class CORDL_TYPE RemoteProcedureCall_1<T0> : public GlobalNamespace::RemoteProcedureCall {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~RemoteProcedureCall_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "RemoteProcedureCall_1", modifiers: " const&", def_value: None }]
constexpr RemoteProcedureCall_1(RemoteProcedureCall_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RemoteProcedureCall_1", modifiers: "&&", def_value: None }]
constexpr RemoteProcedureCall_1(RemoteProcedureCall_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RemoteProcedureCall_1(void* ptr) noexcept : GlobalNamespace::RemoteProcedureCall(ptr) {
}


  constexpr RemoteProcedureCall_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RemoteProcedureCall_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RemoteProcedureCall_1& operator=(RemoteProcedureCall_1&& o) noexcept = default;
  constexpr RemoteProcedureCall_1& operator=(RemoteProcedureCall_1 const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T0> __declspec(property(get=__get__value0, put=__set__value0))  _value0;

constexpr void __set__value0(GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T0> value) ;

constexpr GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T0> __get__value0() const;


// Properties

 T0 __declspec(property(get=get_value0))  value0;


// Methods

/// @brief Method get_value0 addr 0x0 size 0xffffffffffffffff virtual false final false
 T0 get_value0() ;

/// @brief Method SerializeData addr 0x0 size 0xffffffffffffffff virtual true final false
 void SerializeData(LiteNetLib::Utils::NetDataWriter writer, uint32_t protocolVersion) ;

/// @brief Method DeserializeData addr 0x0 size 0xffffffffffffffff virtual true final false
 void DeserializeData(LiteNetLib::Utils::NetDataReader reader, uint32_t protocolVersion) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual false final false
 GlobalNamespace::IRemoteProcedureCall Init(float_t syncTime, T0 value0) ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual true final false
 void Release() ;

static GlobalNamespace::RemoteProcedureCall_1<T0> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::RemoteProcedureCall_1, "", "RemoteProcedureCall`1");
