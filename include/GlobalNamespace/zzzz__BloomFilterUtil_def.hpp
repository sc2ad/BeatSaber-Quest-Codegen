#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace GlobalNamespace {
struct BitMask128;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class ____GlobalNamespace__BloomFilterUtil____c__DisplayClass2_0_1;
}
namespace GlobalNamespace {
class BloomFilterUtil;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T>
class ____GlobalNamespace__BloomFilterUtil____c__DisplayClass2_0_1<T>;
}
namespace GlobalNamespace {
template<>
class ____GlobalNamespace__BloomFilterUtil____c__DisplayClass2_0_1<::GlobalNamespace::BitMask128>;
}
// Type: ::<>c__DisplayClass2_0`1
// Type: ::BloomFilterUtil
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15087))
// CS Name: BloomFilterUtil
class CORDL_TYPE BloomFilterUtil : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
template<typename T>
using __c__DisplayClass2_0_1 = ::GlobalNamespace::____GlobalNamespace__BloomFilterUtil____c__DisplayClass2_0_1<T>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~BloomFilterUtil() = default;

// Ctor Parameters [CppParam { name: "", ty: "BloomFilterUtil", modifiers: " const&", def_value: None }]
constexpr BloomFilterUtil(BloomFilterUtil const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BloomFilterUtil", modifiers: "&&", def_value: None }]
constexpr BloomFilterUtil(BloomFilterUtil&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BloomFilterUtil(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BloomFilterUtil& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BloomFilterUtil& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BloomFilterUtil& operator=(BloomFilterUtil&& o) noexcept = default;
  constexpr BloomFilterUtil& operator=(BloomFilterUtil const& o) noexcept = default;
                


// Methods

/// @brief Method MurmurHash2 addr 0x1214e18 size 0x174 virtual false final false
static uint32_t MurmurHash2(::StringW key) ;

/// @brief Method ToBloomFilter addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T ToBloomFilter(::StringW value, int32_t hashCount, int32_t hashBits) ;

/// @brief Method ToBloomFilter addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T ToBloomFilter(::System::Collections::Generic::IEnumerable_1<::StringW> strings, int32_t hashCount, int32_t hashBits) ;

/// @brief Method AddBloomFilterEntry addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T AddBloomFilterEntry(T bitMask, ::StringW value, int32_t hashCount, int32_t hashBits) ;

/// @brief Method ContainsBloomFilterEntry addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static bool ContainsBloomFilterEntry(T bitMask, ::StringW value, int32_t hashCount, int32_t hashBits) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass2_0`1
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15086))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15086), inst: 2 })
// CS Name: BloomFilterUtil::<>c__DisplayClass2_0`1
class CORDL_TYPE ____GlobalNamespace__BloomFilterUtil____c__DisplayClass2_0_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____GlobalNamespace__BloomFilterUtil____c__DisplayClass2_0_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BloomFilterUtil____c__DisplayClass2_0_1", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__BloomFilterUtil____c__DisplayClass2_0_1(____GlobalNamespace__BloomFilterUtil____c__DisplayClass2_0_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BloomFilterUtil____c__DisplayClass2_0_1", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__BloomFilterUtil____c__DisplayClass2_0_1(____GlobalNamespace__BloomFilterUtil____c__DisplayClass2_0_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__BloomFilterUtil____c__DisplayClass2_0_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__BloomFilterUtil____c__DisplayClass2_0_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__BloomFilterUtil____c__DisplayClass2_0_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__BloomFilterUtil____c__DisplayClass2_0_1& operator=(____GlobalNamespace__BloomFilterUtil____c__DisplayClass2_0_1&& o) noexcept = default;
  constexpr ____GlobalNamespace__BloomFilterUtil____c__DisplayClass2_0_1& operator=(____GlobalNamespace__BloomFilterUtil____c__DisplayClass2_0_1 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_hashCount, put=__set_hashCount))  hashCount;

constexpr void __set_hashCount(int32_t value) ;

constexpr int32_t __get_hashCount() const;

 int32_t __declspec(property(get=__get_hashBits, put=__set_hashBits))  hashBits;

constexpr void __set_hashBits(int32_t value) ;

constexpr int32_t __get_hashBits() const;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__BloomFilterUtil____c__DisplayClass2_0_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <ToBloomFilter>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 T _ToBloomFilter_b__0(T bloomFilter, ::StringW str) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass2_0`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15086))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15086), inst: 2531 })
// CS Name: BloomFilterUtil::<>c__DisplayClass2_0`1
class CORDL_TYPE ____GlobalNamespace__BloomFilterUtil____c__DisplayClass2_0_1<::GlobalNamespace::BitMask128> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____GlobalNamespace__BloomFilterUtil____c__DisplayClass2_0_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BloomFilterUtil____c__DisplayClass2_0_1", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__BloomFilterUtil____c__DisplayClass2_0_1(____GlobalNamespace__BloomFilterUtil____c__DisplayClass2_0_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BloomFilterUtil____c__DisplayClass2_0_1", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__BloomFilterUtil____c__DisplayClass2_0_1(____GlobalNamespace__BloomFilterUtil____c__DisplayClass2_0_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__BloomFilterUtil____c__DisplayClass2_0_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__BloomFilterUtil____c__DisplayClass2_0_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__BloomFilterUtil____c__DisplayClass2_0_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__BloomFilterUtil____c__DisplayClass2_0_1& operator=(____GlobalNamespace__BloomFilterUtil____c__DisplayClass2_0_1&& o) noexcept = default;
  constexpr ____GlobalNamespace__BloomFilterUtil____c__DisplayClass2_0_1& operator=(____GlobalNamespace__BloomFilterUtil____c__DisplayClass2_0_1 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_hashCount, put=__set_hashCount))  hashCount;

constexpr void __set_hashCount(int32_t value) ;

constexpr int32_t __get_hashCount() const;

 int32_t __declspec(property(get=__get_hashBits, put=__set_hashBits))  hashBits;

constexpr void __set_hashBits(int32_t value) ;

constexpr int32_t __get_hashBits() const;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__BloomFilterUtil____c__DisplayClass2_0_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <ToBloomFilter>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 ::GlobalNamespace::BitMask128 _ToBloomFilter_b__0(::GlobalNamespace::BitMask128 bloomFilter, ::StringW str) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::____GlobalNamespace__BloomFilterUtil____c__DisplayClass2_0_1, "", "BloomFilterUtil/<>c__DisplayClass2_0`1");
NEED_NO_BOX(::GlobalNamespace::BloomFilterUtil);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomFilterUtil, "", "BloomFilterUtil");
