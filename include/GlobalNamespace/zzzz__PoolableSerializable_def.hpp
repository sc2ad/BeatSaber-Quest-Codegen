#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System {
class Type;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace GlobalNamespace {
class IPoolableSerializable;
}
namespace System::Collections::Concurrent {
template<typename T>
class ConcurrentBag_1;
}
namespace System::Collections::Concurrent {
template<typename TKey,typename TValue>
class ConcurrentDictionary_2;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib::Utils {
class INetSerializable;
}
// Forward declare root types
namespace GlobalNamespace {
class PoolableSerializable;
}
// Type: ::PoolableSerializable
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15122))
// CS Name: PoolableSerializable
class CORDL_TYPE PoolableSerializable : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IPoolableSerializable
constexpr operator  GlobalNamespace::IPoolableSerializable() const noexcept;

/// @brief Convert operator to LiteNetLib::Utils::INetSerializable
constexpr operator  LiteNetLib::Utils::INetSerializable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~PoolableSerializable() = default;

// Ctor Parameters [CppParam { name: "", ty: "PoolableSerializable", modifiers: " const&", def_value: None }]
constexpr PoolableSerializable(PoolableSerializable const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PoolableSerializable", modifiers: "&&", def_value: None }]
constexpr PoolableSerializable(PoolableSerializable&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PoolableSerializable(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PoolableSerializable& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PoolableSerializable& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PoolableSerializable& operator=(PoolableSerializable&& o) noexcept = default;
  constexpr PoolableSerializable& operator=(PoolableSerializable const& o) noexcept = default;
                


// Fields

/// @brief Field kPoolSize offset 0
static constexpr int32_t  kPoolSize{32};

static System::Collections::Concurrent::ConcurrentDictionary_2<System::Type,System::Collections::Concurrent::ConcurrentBag_1<GlobalNamespace::IPoolableSerializable>> __declspec(property(get=__get__pools, put=__set__pools))  _pools;

static void __set__pools(System::Collections::Concurrent::ConcurrentDictionary_2<System::Type,System::Collections::Concurrent::ConcurrentBag_1<GlobalNamespace::IPoolableSerializable>> value) ;

static System::Collections::Concurrent::ConcurrentDictionary_2<System::Type,System::Collections::Concurrent::ConcurrentBag_1<GlobalNamespace::IPoolableSerializable>> __get__pools() ;

 int32_t __declspec(property(get=__get__referenceCount, put=__set__referenceCount))  _referenceCount;

constexpr void __set__referenceCount(int32_t value) ;

constexpr int32_t __get__referenceCount() const;


// Methods

/// @brief Method NoDomainReloadInit addr 0x1219178 size 0x78 virtual false final false
static void NoDomainReloadInit() ;

/// @brief Method Retain addr 0x1218d4c size 0x10 virtual true final false
 void Retain() ;

/// @brief Method Release addr 0x1218c40 size 0x70 virtual true final false
 void Release() ;

/// @brief Method Serialize addr 0x0 size 0xffffffffffffffff virtual true final false
 void Serialize(LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method Deserialize addr 0x0 size 0xffffffffffffffff virtual true final false
 void Deserialize(LiteNetLib::Utils::NetDataReader reader) ;

/// @brief Method Obtain addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T Obtain() ;

/// @brief Method Release addr 0x12191f0 size 0xcc virtual false final false
static void Release(GlobalNamespace::IPoolableSerializable t) ;

/// @brief Method GetPool addr 0x12192bc size 0x1e8 virtual false final false
static System::Collections::Concurrent::ConcurrentBag_1<GlobalNamespace::IPoolableSerializable> GetPool(System::Type t) ;

static GlobalNamespace::PoolableSerializable New_ctor() ;

/// @brief Method .ctor addr 0x1217670 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::PoolableSerializable);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PoolableSerializable, "", "PoolableSerializable");
