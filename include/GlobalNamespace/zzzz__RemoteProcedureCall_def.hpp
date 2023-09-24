#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
struct SongPackMask;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace System {
struct Int32Enum;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
namespace GlobalNamespace {
class IPoolablePacket;
}
namespace LiteNetLib::Utils {
class INetSerializable;
}
namespace GlobalNamespace {
class IRemoteProcedureCall;
}
namespace GlobalNamespace {
template<typename T>
class GlobalNamespace__RemoteProcedureCall__TypeWrapper_1;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class GlobalNamespace__RemoteProcedureCall__TypeWrapper_1;
}
namespace GlobalNamespace {
template<>
class GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<GlobalNamespace::SongPackMask>;
}
namespace GlobalNamespace {
template<>
class GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<System::Int32Enum>;
}
namespace GlobalNamespace {
template<::cordl_internals::is_or_is_backed_by<int64_t> T>
class GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T>;
}
namespace GlobalNamespace {
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
class GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T>;
}
namespace GlobalNamespace {
template<::cordl_internals::is_or_is_backed_by<uint8_t> T>
class GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T>;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T>
class GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T>;
}
namespace GlobalNamespace {
template<>
class GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Quaternion>;
}
namespace GlobalNamespace {
template<>
class GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector3>;
}
namespace GlobalNamespace {
template<>
class GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector4>;
}
namespace GlobalNamespace {
template<>
class GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<bool>;
}
namespace GlobalNamespace {
template<>
class GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<float_t>;
}
namespace GlobalNamespace {
class RemoteProcedureCall;
}
// Type: ::TypeWrapper`1
// Type: ::RemoteProcedureCall
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12875))
// CS Name: RemoteProcedureCall
class CORDL_TYPE RemoteProcedureCall : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
template<typename T>
using TypeWrapper_1 = GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T>;

/// @brief Convert operator to GlobalNamespace::IRemoteProcedureCall
constexpr operator  GlobalNamespace::IRemoteProcedureCall() const noexcept;

/// @brief Convert operator to LiteNetLib::Utils::INetSerializable
constexpr operator  LiteNetLib::Utils::INetSerializable() const noexcept;

/// @brief Convert operator to GlobalNamespace::IPoolablePacket
constexpr operator  GlobalNamespace::IPoolablePacket() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~RemoteProcedureCall() = default;

// Ctor Parameters [CppParam { name: "", ty: "RemoteProcedureCall", modifiers: " const&", def_value: None }]
constexpr RemoteProcedureCall(RemoteProcedureCall const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RemoteProcedureCall", modifiers: "&&", def_value: None }]
constexpr RemoteProcedureCall(RemoteProcedureCall&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RemoteProcedureCall(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RemoteProcedureCall& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RemoteProcedureCall& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RemoteProcedureCall& operator=(RemoteProcedureCall&& o) noexcept = default;
  constexpr RemoteProcedureCall& operator=(RemoteProcedureCall const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__syncTime_k__BackingField, put=__set__syncTime_k__BackingField))  _syncTime_k__BackingField;

constexpr void __set__syncTime_k__BackingField(float_t value) ;

constexpr float_t __get__syncTime_k__BackingField() const;


// Properties

 float_t __declspec(property(get=get_syncTime, put=set_syncTime))  syncTime;


// Methods

/// @brief Method get_syncTime addr 0xdc72d8 size 0x8 virtual true final true
 float_t get_syncTime() ;

/// @brief Method set_syncTime addr 0xdc72e0 size 0x8 virtual false final false
 void set_syncTime(float_t value) ;

/// @brief Method SerializeData addr 0xdc72e8 size 0x4 virtual true final false
 void SerializeData(LiteNetLib::Utils::NetDataWriter writer, uint32_t protocolVersion) ;

/// @brief Method DeserializeData addr 0xdc72ec size 0x4 virtual true final false
 void DeserializeData(LiteNetLib::Utils::NetDataReader reader, uint32_t protocolVersion) ;

/// @brief Method LiteNetLib.Utils.INetSerializable.Serialize addr 0xdc72f0 size 0x48 virtual true final true
 void LiteNetLib_Utils_INetSerializable_Serialize(LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method LiteNetLib.Utils.INetSerializable.Deserialize addr 0xdc7338 size 0x48 virtual true final true
 void LiteNetLib_Utils_INetSerializable_Deserialize(LiteNetLib::Utils::NetDataReader reader) ;

/// @brief Method Release addr 0xdc7380 size 0x4 virtual true final false
 void Release() ;

/// @brief Method Init addr 0xdc7480 size 0x8 virtual false final false
 GlobalNamespace::IRemoteProcedureCall Init(float_t syncTime) ;

static GlobalNamespace::RemoteProcedureCall New_ctor() ;

/// @brief Method .ctor addr 0xdbc190 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TypeWrapper`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12874))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12874), inst: 4825 })
// CS Name: RemoteProcedureCall::TypeWrapper`1
class CORDL_TYPE GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<System::Int32Enum> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__RemoteProcedureCall__TypeWrapper_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__RemoteProcedureCall__TypeWrapper_1", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__RemoteProcedureCall__TypeWrapper_1(GlobalNamespace__RemoteProcedureCall__TypeWrapper_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__RemoteProcedureCall__TypeWrapper_1", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__RemoteProcedureCall__TypeWrapper_1(GlobalNamespace__RemoteProcedureCall__TypeWrapper_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__RemoteProcedureCall__TypeWrapper_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__RemoteProcedureCall__TypeWrapper_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__RemoteProcedureCall__TypeWrapper_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__RemoteProcedureCall__TypeWrapper_1& operator=(GlobalNamespace__RemoteProcedureCall__TypeWrapper_1&& o) noexcept = default;
  constexpr GlobalNamespace__RemoteProcedureCall__TypeWrapper_1& operator=(GlobalNamespace__RemoteProcedureCall__TypeWrapper_1 const& o) noexcept = default;
                


// Fields

 System::Int32Enum __declspec(property(get=__get__v, put=__set__v))  _v;

constexpr void __set__v(System::Int32Enum value) ;

constexpr System::Int32Enum __get__v() const;


// Properties

 bool __declspec(property(get=get_hasValue))  hasValue;

 System::Int32Enum __declspec(property(get=get_value))  value;


// Methods

/// @brief Method get_hasValue addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_hasValue() ;

/// @brief Method get_value addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Int32Enum get_value() ;

/// @brief Method Set addr 0x0 size 0xffffffffffffffff virtual false final false
 void Set(System::Int32Enum v) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear() ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual false final false
 void Release() ;

/// @brief Method Serialize addr 0x0 size 0xffffffffffffffff virtual false final false
 void Serialize(LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method Deserialize addr 0x0 size 0xffffffffffffffff virtual false final false
 void Deserialize(LiteNetLib::Utils::NetDataReader reader) ;

static GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<System::Int32Enum> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TypeWrapper`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12874))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12874), inst: 3232 })
// CS Name: RemoteProcedureCall::TypeWrapper`1
class CORDL_TYPE GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<GlobalNamespace::SongPackMask> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__RemoteProcedureCall__TypeWrapper_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__RemoteProcedureCall__TypeWrapper_1", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__RemoteProcedureCall__TypeWrapper_1(GlobalNamespace__RemoteProcedureCall__TypeWrapper_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__RemoteProcedureCall__TypeWrapper_1", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__RemoteProcedureCall__TypeWrapper_1(GlobalNamespace__RemoteProcedureCall__TypeWrapper_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__RemoteProcedureCall__TypeWrapper_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__RemoteProcedureCall__TypeWrapper_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__RemoteProcedureCall__TypeWrapper_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__RemoteProcedureCall__TypeWrapper_1& operator=(GlobalNamespace__RemoteProcedureCall__TypeWrapper_1&& o) noexcept = default;
  constexpr GlobalNamespace__RemoteProcedureCall__TypeWrapper_1& operator=(GlobalNamespace__RemoteProcedureCall__TypeWrapper_1 const& o) noexcept = default;
                


// Fields

 GlobalNamespace::SongPackMask __declspec(property(get=__get__v, put=__set__v))  _v;

constexpr void __set__v(GlobalNamespace::SongPackMask value) ;

constexpr GlobalNamespace::SongPackMask __get__v() const;


// Properties

 bool __declspec(property(get=get_hasValue))  hasValue;

 GlobalNamespace::SongPackMask __declspec(property(get=get_value))  value;


// Methods

/// @brief Method get_hasValue addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_hasValue() ;

/// @brief Method get_value addr 0x0 size 0xffffffffffffffff virtual false final false
 GlobalNamespace::SongPackMask get_value() ;

/// @brief Method Set addr 0x0 size 0xffffffffffffffff virtual false final false
 void Set(GlobalNamespace::SongPackMask v) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear() ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual false final false
 void Release() ;

/// @brief Method Serialize addr 0x0 size 0xffffffffffffffff virtual false final false
 void Serialize(LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method Deserialize addr 0x0 size 0xffffffffffffffff virtual false final false
 void Deserialize(LiteNetLib::Utils::NetDataReader reader) ;

static GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<GlobalNamespace::SongPackMask> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TypeWrapper`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12874))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12874), inst: 3222 })
// CS Name: RemoteProcedureCall::TypeWrapper`1
class CORDL_TYPE GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Quaternion> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__RemoteProcedureCall__TypeWrapper_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__RemoteProcedureCall__TypeWrapper_1", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__RemoteProcedureCall__TypeWrapper_1(GlobalNamespace__RemoteProcedureCall__TypeWrapper_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__RemoteProcedureCall__TypeWrapper_1", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__RemoteProcedureCall__TypeWrapper_1(GlobalNamespace__RemoteProcedureCall__TypeWrapper_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__RemoteProcedureCall__TypeWrapper_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__RemoteProcedureCall__TypeWrapper_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__RemoteProcedureCall__TypeWrapper_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__RemoteProcedureCall__TypeWrapper_1& operator=(GlobalNamespace__RemoteProcedureCall__TypeWrapper_1&& o) noexcept = default;
  constexpr GlobalNamespace__RemoteProcedureCall__TypeWrapper_1& operator=(GlobalNamespace__RemoteProcedureCall__TypeWrapper_1 const& o) noexcept = default;
                


// Fields

 UnityEngine::Quaternion __declspec(property(get=__get__v, put=__set__v))  _v;

constexpr void __set__v(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get__v() const;


// Properties

 bool __declspec(property(get=get_hasValue))  hasValue;

 UnityEngine::Quaternion __declspec(property(get=get_value))  value;


// Methods

/// @brief Method get_hasValue addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_hasValue() ;

/// @brief Method get_value addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::Quaternion get_value() ;

/// @brief Method Set addr 0x0 size 0xffffffffffffffff virtual false final false
 void Set(UnityEngine::Quaternion v) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear() ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual false final false
 void Release() ;

/// @brief Method Serialize addr 0x0 size 0xffffffffffffffff virtual false final false
 void Serialize(LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method Deserialize addr 0x0 size 0xffffffffffffffff virtual false final false
 void Deserialize(LiteNetLib::Utils::NetDataReader reader) ;

static GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Quaternion> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TypeWrapper`1
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int64_t> T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12874))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12874), inst: 830 })
// CS Name: RemoteProcedureCall::TypeWrapper`1
class CORDL_TYPE GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__RemoteProcedureCall__TypeWrapper_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__RemoteProcedureCall__TypeWrapper_1", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__RemoteProcedureCall__TypeWrapper_1(GlobalNamespace__RemoteProcedureCall__TypeWrapper_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__RemoteProcedureCall__TypeWrapper_1", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__RemoteProcedureCall__TypeWrapper_1(GlobalNamespace__RemoteProcedureCall__TypeWrapper_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__RemoteProcedureCall__TypeWrapper_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__RemoteProcedureCall__TypeWrapper_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__RemoteProcedureCall__TypeWrapper_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__RemoteProcedureCall__TypeWrapper_1& operator=(GlobalNamespace__RemoteProcedureCall__TypeWrapper_1&& o) noexcept = default;
  constexpr GlobalNamespace__RemoteProcedureCall__TypeWrapper_1& operator=(GlobalNamespace__RemoteProcedureCall__TypeWrapper_1 const& o) noexcept = default;
                


// Fields

 T __declspec(property(get=__get__v, put=__set__v))  _v;

constexpr void __set__v(T value) ;

constexpr T __get__v() const;


// Properties

 bool __declspec(property(get=get_hasValue))  hasValue;

 T __declspec(property(get=get_value))  value;


// Methods

/// @brief Method get_hasValue addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_hasValue() ;

/// @brief Method get_value addr 0x0 size 0xffffffffffffffff virtual false final false
 T get_value() ;

/// @brief Method Set addr 0x0 size 0xffffffffffffffff virtual false final false
 void Set(T v) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear() ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual false final false
 void Release() ;

/// @brief Method Serialize addr 0x0 size 0xffffffffffffffff virtual false final false
 void Serialize(LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method Deserialize addr 0x0 size 0xffffffffffffffff virtual false final false
 void Deserialize(LiteNetLib::Utils::NetDataReader reader) ;

static GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TypeWrapper`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12874))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12874), inst: 731 })
// CS Name: RemoteProcedureCall::TypeWrapper`1
class CORDL_TYPE GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector4> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__RemoteProcedureCall__TypeWrapper_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__RemoteProcedureCall__TypeWrapper_1", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__RemoteProcedureCall__TypeWrapper_1(GlobalNamespace__RemoteProcedureCall__TypeWrapper_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__RemoteProcedureCall__TypeWrapper_1", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__RemoteProcedureCall__TypeWrapper_1(GlobalNamespace__RemoteProcedureCall__TypeWrapper_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__RemoteProcedureCall__TypeWrapper_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__RemoteProcedureCall__TypeWrapper_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__RemoteProcedureCall__TypeWrapper_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__RemoteProcedureCall__TypeWrapper_1& operator=(GlobalNamespace__RemoteProcedureCall__TypeWrapper_1&& o) noexcept = default;
  constexpr GlobalNamespace__RemoteProcedureCall__TypeWrapper_1& operator=(GlobalNamespace__RemoteProcedureCall__TypeWrapper_1 const& o) noexcept = default;
                


// Fields

 UnityEngine::Vector4 __declspec(property(get=__get__v, put=__set__v))  _v;

constexpr void __set__v(UnityEngine::Vector4 value) ;

constexpr UnityEngine::Vector4 __get__v() const;


// Properties

 bool __declspec(property(get=get_hasValue))  hasValue;

 UnityEngine::Vector4 __declspec(property(get=get_value))  value;


// Methods

/// @brief Method get_hasValue addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_hasValue() ;

/// @brief Method get_value addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::Vector4 get_value() ;

/// @brief Method Set addr 0x0 size 0xffffffffffffffff virtual false final false
 void Set(UnityEngine::Vector4 v) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear() ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual false final false
 void Release() ;

/// @brief Method Serialize addr 0x0 size 0xffffffffffffffff virtual false final false
 void Serialize(LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method Deserialize addr 0x0 size 0xffffffffffffffff virtual false final false
 void Deserialize(LiteNetLib::Utils::NetDataReader reader) ;

static GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector4> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TypeWrapper`1
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::is_or_is_backed_by<uint8_t> T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12874))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12874), inst: 717 })
// CS Name: RemoteProcedureCall::TypeWrapper`1
class CORDL_TYPE GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__RemoteProcedureCall__TypeWrapper_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__RemoteProcedureCall__TypeWrapper_1", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__RemoteProcedureCall__TypeWrapper_1(GlobalNamespace__RemoteProcedureCall__TypeWrapper_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__RemoteProcedureCall__TypeWrapper_1", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__RemoteProcedureCall__TypeWrapper_1(GlobalNamespace__RemoteProcedureCall__TypeWrapper_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__RemoteProcedureCall__TypeWrapper_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__RemoteProcedureCall__TypeWrapper_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__RemoteProcedureCall__TypeWrapper_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__RemoteProcedureCall__TypeWrapper_1& operator=(GlobalNamespace__RemoteProcedureCall__TypeWrapper_1&& o) noexcept = default;
  constexpr GlobalNamespace__RemoteProcedureCall__TypeWrapper_1& operator=(GlobalNamespace__RemoteProcedureCall__TypeWrapper_1 const& o) noexcept = default;
                


// Fields

 T __declspec(property(get=__get__v, put=__set__v))  _v;

constexpr void __set__v(T value) ;

constexpr T __get__v() const;


// Properties

 bool __declspec(property(get=get_hasValue))  hasValue;

 T __declspec(property(get=get_value))  value;


// Methods

/// @brief Method get_hasValue addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_hasValue() ;

/// @brief Method get_value addr 0x0 size 0xffffffffffffffff virtual false final false
 T get_value() ;

/// @brief Method Set addr 0x0 size 0xffffffffffffffff virtual false final false
 void Set(T v) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear() ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual false final false
 void Release() ;

/// @brief Method Serialize addr 0x0 size 0xffffffffffffffff virtual false final false
 void Serialize(LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method Deserialize addr 0x0 size 0xffffffffffffffff virtual false final false
 void Deserialize(LiteNetLib::Utils::NetDataReader reader) ;

static GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TypeWrapper`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12874))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12874), inst: 394 })
// CS Name: RemoteProcedureCall::TypeWrapper`1
class CORDL_TYPE GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector3> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__RemoteProcedureCall__TypeWrapper_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__RemoteProcedureCall__TypeWrapper_1", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__RemoteProcedureCall__TypeWrapper_1(GlobalNamespace__RemoteProcedureCall__TypeWrapper_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__RemoteProcedureCall__TypeWrapper_1", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__RemoteProcedureCall__TypeWrapper_1(GlobalNamespace__RemoteProcedureCall__TypeWrapper_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__RemoteProcedureCall__TypeWrapper_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__RemoteProcedureCall__TypeWrapper_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__RemoteProcedureCall__TypeWrapper_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__RemoteProcedureCall__TypeWrapper_1& operator=(GlobalNamespace__RemoteProcedureCall__TypeWrapper_1&& o) noexcept = default;
  constexpr GlobalNamespace__RemoteProcedureCall__TypeWrapper_1& operator=(GlobalNamespace__RemoteProcedureCall__TypeWrapper_1 const& o) noexcept = default;
                


// Fields

 UnityEngine::Vector3 __declspec(property(get=__get__v, put=__set__v))  _v;

constexpr void __set__v(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__v() const;


// Properties

 bool __declspec(property(get=get_hasValue))  hasValue;

 UnityEngine::Vector3 __declspec(property(get=get_value))  value;


// Methods

/// @brief Method get_hasValue addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_hasValue() ;

/// @brief Method get_value addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::Vector3 get_value() ;

/// @brief Method Set addr 0x0 size 0xffffffffffffffff virtual false final false
 void Set(UnityEngine::Vector3 v) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear() ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual false final false
 void Release() ;

/// @brief Method Serialize addr 0x0 size 0xffffffffffffffff virtual false final false
 void Serialize(LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method Deserialize addr 0x0 size 0xffffffffffffffff virtual false final false
 void Deserialize(LiteNetLib::Utils::NetDataReader reader) ;

static GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector3> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TypeWrapper`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12874))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12874), inst: 374 })
// CS Name: RemoteProcedureCall::TypeWrapper`1
class CORDL_TYPE GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<float_t> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__RemoteProcedureCall__TypeWrapper_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__RemoteProcedureCall__TypeWrapper_1", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__RemoteProcedureCall__TypeWrapper_1(GlobalNamespace__RemoteProcedureCall__TypeWrapper_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__RemoteProcedureCall__TypeWrapper_1", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__RemoteProcedureCall__TypeWrapper_1(GlobalNamespace__RemoteProcedureCall__TypeWrapper_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__RemoteProcedureCall__TypeWrapper_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__RemoteProcedureCall__TypeWrapper_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__RemoteProcedureCall__TypeWrapper_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__RemoteProcedureCall__TypeWrapper_1& operator=(GlobalNamespace__RemoteProcedureCall__TypeWrapper_1&& o) noexcept = default;
  constexpr GlobalNamespace__RemoteProcedureCall__TypeWrapper_1& operator=(GlobalNamespace__RemoteProcedureCall__TypeWrapper_1 const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__v, put=__set__v))  _v;

constexpr void __set__v(float_t value) ;

constexpr float_t __get__v() const;


// Properties

 bool __declspec(property(get=get_hasValue))  hasValue;

 float_t __declspec(property(get=get_value))  value;


// Methods

/// @brief Method get_hasValue addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_hasValue() ;

/// @brief Method get_value addr 0x0 size 0xffffffffffffffff virtual false final false
 float_t get_value() ;

/// @brief Method Set addr 0x0 size 0xffffffffffffffff virtual false final false
 void Set(float_t v) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear() ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual false final false
 void Release() ;

/// @brief Method Serialize addr 0x0 size 0xffffffffffffffff virtual false final false
 void Serialize(LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method Deserialize addr 0x0 size 0xffffffffffffffff virtual false final false
 void Deserialize(LiteNetLib::Utils::NetDataReader reader) ;

static GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<float_t> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TypeWrapper`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12874))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12874), inst: 99 })
// CS Name: RemoteProcedureCall::TypeWrapper`1
class CORDL_TYPE GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<bool> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__RemoteProcedureCall__TypeWrapper_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__RemoteProcedureCall__TypeWrapper_1", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__RemoteProcedureCall__TypeWrapper_1(GlobalNamespace__RemoteProcedureCall__TypeWrapper_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__RemoteProcedureCall__TypeWrapper_1", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__RemoteProcedureCall__TypeWrapper_1(GlobalNamespace__RemoteProcedureCall__TypeWrapper_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__RemoteProcedureCall__TypeWrapper_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__RemoteProcedureCall__TypeWrapper_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__RemoteProcedureCall__TypeWrapper_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__RemoteProcedureCall__TypeWrapper_1& operator=(GlobalNamespace__RemoteProcedureCall__TypeWrapper_1&& o) noexcept = default;
  constexpr GlobalNamespace__RemoteProcedureCall__TypeWrapper_1& operator=(GlobalNamespace__RemoteProcedureCall__TypeWrapper_1 const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__v, put=__set__v))  _v;

constexpr void __set__v(bool value) ;

constexpr bool __get__v() const;


// Properties

 bool __declspec(property(get=get_hasValue))  hasValue;

 bool __declspec(property(get=get_value))  value;


// Methods

/// @brief Method get_hasValue addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_hasValue() ;

/// @brief Method get_value addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_value() ;

/// @brief Method Set addr 0x0 size 0xffffffffffffffff virtual false final false
 void Set(bool v) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear() ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual false final false
 void Release() ;

/// @brief Method Serialize addr 0x0 size 0xffffffffffffffff virtual false final false
 void Serialize(LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method Deserialize addr 0x0 size 0xffffffffffffffff virtual false final false
 void Deserialize(LiteNetLib::Utils::NetDataReader reader) ;

static GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<bool> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TypeWrapper`1
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12874))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12874), inst: 92 })
// CS Name: RemoteProcedureCall::TypeWrapper`1
class CORDL_TYPE GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__RemoteProcedureCall__TypeWrapper_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__RemoteProcedureCall__TypeWrapper_1", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__RemoteProcedureCall__TypeWrapper_1(GlobalNamespace__RemoteProcedureCall__TypeWrapper_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__RemoteProcedureCall__TypeWrapper_1", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__RemoteProcedureCall__TypeWrapper_1(GlobalNamespace__RemoteProcedureCall__TypeWrapper_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__RemoteProcedureCall__TypeWrapper_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__RemoteProcedureCall__TypeWrapper_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__RemoteProcedureCall__TypeWrapper_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__RemoteProcedureCall__TypeWrapper_1& operator=(GlobalNamespace__RemoteProcedureCall__TypeWrapper_1&& o) noexcept = default;
  constexpr GlobalNamespace__RemoteProcedureCall__TypeWrapper_1& operator=(GlobalNamespace__RemoteProcedureCall__TypeWrapper_1 const& o) noexcept = default;
                


// Fields

 T __declspec(property(get=__get__v, put=__set__v))  _v;

constexpr void __set__v(T value) ;

constexpr T __get__v() const;


// Properties

 bool __declspec(property(get=get_hasValue))  hasValue;

 T __declspec(property(get=get_value))  value;


// Methods

/// @brief Method get_hasValue addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_hasValue() ;

/// @brief Method get_value addr 0x0 size 0xffffffffffffffff virtual false final false
 T get_value() ;

/// @brief Method Set addr 0x0 size 0xffffffffffffffff virtual false final false
 void Set(T v) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear() ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual false final false
 void Release() ;

/// @brief Method Serialize addr 0x0 size 0xffffffffffffffff virtual false final false
 void Serialize(LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method Deserialize addr 0x0 size 0xffffffffffffffff virtual false final false
 void Deserialize(LiteNetLib::Utils::NetDataReader reader) ;

static GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TypeWrapper`1
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12874))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12874), inst: 2 })
// CS Name: RemoteProcedureCall::TypeWrapper`1
class CORDL_TYPE GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__RemoteProcedureCall__TypeWrapper_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__RemoteProcedureCall__TypeWrapper_1", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__RemoteProcedureCall__TypeWrapper_1(GlobalNamespace__RemoteProcedureCall__TypeWrapper_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__RemoteProcedureCall__TypeWrapper_1", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__RemoteProcedureCall__TypeWrapper_1(GlobalNamespace__RemoteProcedureCall__TypeWrapper_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__RemoteProcedureCall__TypeWrapper_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__RemoteProcedureCall__TypeWrapper_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__RemoteProcedureCall__TypeWrapper_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__RemoteProcedureCall__TypeWrapper_1& operator=(GlobalNamespace__RemoteProcedureCall__TypeWrapper_1&& o) noexcept = default;
  constexpr GlobalNamespace__RemoteProcedureCall__TypeWrapper_1& operator=(GlobalNamespace__RemoteProcedureCall__TypeWrapper_1 const& o) noexcept = default;
                


// Fields

 T __declspec(property(get=__get__v, put=__set__v))  _v;

constexpr void __set__v(T value) ;

constexpr T __get__v() const;


// Properties

 bool __declspec(property(get=get_hasValue))  hasValue;

 T __declspec(property(get=get_value))  value;


// Methods

/// @brief Method get_hasValue addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_hasValue() ;

/// @brief Method get_value addr 0x0 size 0xffffffffffffffff virtual false final false
 T get_value() ;

/// @brief Method Set addr 0x0 size 0xffffffffffffffff virtual false final false
 void Set(T v) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear() ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual false final false
 void Release() ;

/// @brief Method Serialize addr 0x0 size 0xffffffffffffffff virtual false final false
 void Serialize(LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method Deserialize addr 0x0 size 0xffffffffffffffff virtual false final false
 void Deserialize(LiteNetLib::Utils::NetDataReader reader) ;

static GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1, "", "RemoteProcedureCall/TypeWrapper`1");
NEED_NO_BOX(GlobalNamespace::RemoteProcedureCall);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::RemoteProcedureCall, "", "RemoteProcedureCall");
