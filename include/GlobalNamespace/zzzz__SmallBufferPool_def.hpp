#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class SmallBufferPool;
}
// Type: ::SmallBufferPool
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12897))
// CS Name: SmallBufferPool
class CORDL_TYPE SmallBufferPool : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~SmallBufferPool() = default;

// Ctor Parameters [CppParam { name: "", ty: "SmallBufferPool", modifiers: " const&", def_value: None }]
constexpr SmallBufferPool(SmallBufferPool const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SmallBufferPool", modifiers: "&&", def_value: None }]
constexpr SmallBufferPool(SmallBufferPool&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SmallBufferPool(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SmallBufferPool& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SmallBufferPool& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SmallBufferPool& operator=(SmallBufferPool&& o) noexcept = default;
  constexpr SmallBufferPool& operator=(SmallBufferPool const& o) noexcept = default;
                


// Fields

/// @brief Field kCacheSmallSize offset 0
static constexpr int32_t  kCacheSmallSize{512};

/// @brief Field kCacheMediumSize offset 0
static constexpr int32_t  kCacheMediumSize{1024};

/// @brief Field kCacheLargeSize offset 0
static constexpr int32_t  kCacheLargeSize{2048};

/// @brief Field kCacheMaxSize offset 0
static constexpr int32_t  kCacheMaxSize{4096};

/// @brief Field kCacheSmallMaxCapacity offset 0
static constexpr int32_t  kCacheSmallMaxCapacity{128};

/// @brief Field kCacheMediumMaxCapacity offset 0
static constexpr int32_t  kCacheMediumMaxCapacity{32};

/// @brief Field kCacheLargeMaxCapacity offset 0
static constexpr int32_t  kCacheLargeMaxCapacity{16};

/// @brief Field kCacheMaxMaxCapacity offset 0
static constexpr int32_t  kCacheMaxMaxCapacity{8};

 System::Collections::Generic::List_1<::ArrayW<uint8_t>> __declspec(property(get=__get__cacheSmall, put=__set__cacheSmall))  _cacheSmall;

constexpr void __set__cacheSmall(System::Collections::Generic::List_1<::ArrayW<uint8_t>> value) ;

constexpr System::Collections::Generic::List_1<::ArrayW<uint8_t>> __get__cacheSmall() const;

 System::Collections::Generic::List_1<::ArrayW<uint8_t>> __declspec(property(get=__get__cacheMedium, put=__set__cacheMedium))  _cacheMedium;

constexpr void __set__cacheMedium(System::Collections::Generic::List_1<::ArrayW<uint8_t>> value) ;

constexpr System::Collections::Generic::List_1<::ArrayW<uint8_t>> __get__cacheMedium() const;

 System::Collections::Generic::List_1<::ArrayW<uint8_t>> __declspec(property(get=__get__cacheLarge, put=__set__cacheLarge))  _cacheLarge;

constexpr void __set__cacheLarge(System::Collections::Generic::List_1<::ArrayW<uint8_t>> value) ;

constexpr System::Collections::Generic::List_1<::ArrayW<uint8_t>> __get__cacheLarge() const;

 System::Collections::Generic::List_1<::ArrayW<uint8_t>> __declspec(property(get=__get__cacheMax, put=__set__cacheMax))  _cacheMax;

constexpr void __set__cacheMax(System::Collections::Generic::List_1<::ArrayW<uint8_t>> value) ;

constexpr System::Collections::Generic::List_1<::ArrayW<uint8_t>> __get__cacheMax() const;

static GlobalNamespace::SmallBufferPool __declspec(property(get=__get_instance, put=__set_instance))  instance;

static void __set_instance(GlobalNamespace::SmallBufferPool value) ;

static GlobalNamespace::SmallBufferPool __get_instance() ;


// Methods

/// @brief Method GetBuffer addr 0xdc9b98 size 0x270 virtual false final false
 ::ArrayW<uint8_t> GetBuffer(int32_t length) ;

/// @brief Method ReleaseBuffer addr 0xdc9e08 size 0x4 virtual false final false
 void ReleaseBuffer(::ArrayW<uint8_t> buffer) ;

/// @brief Method ReleaseBuffer addr 0xdc9fd0 size 0x1c virtual false final false
 void ReleaseBuffer(ByRef<::ArrayW<uint8_t>> buffer) ;

/// @brief Method ReleaseBufferInternal addr 0xdc9e0c size 0x1c4 virtual false final false
 void ReleaseBufferInternal(::ArrayW<uint8_t> buffer) ;

// Ctor Parameters []
explicit SmallBufferPool() ;

/// @brief Method .ctor addr 0xdc9fec size 0xe8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::SmallBufferPool);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SmallBufferPool, "", "SmallBufferPool");
