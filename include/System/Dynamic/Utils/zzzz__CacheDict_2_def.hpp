#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
// Forward declare root types
namespace System::Dynamic::Utils {
template<typename TKey,typename TValue>
class CacheDict_2;
}
namespace System::Dynamic::Utils {
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TValue>
class CacheDict_2<TKey,TValue>;
}
namespace System::Dynamic::Utils {
template<typename TKey,typename TValue>
class System__Dynamic__Utils__CacheDict_2__Entry;
}
// Type: ::Entry
namespace System::Dynamic::Utils {
// cpp template
template<typename TKey,typename TValue>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14589))
// CS Name: System.Dynamic.Utils.CacheDict`2::Entry
class CORDL_TYPE System__Dynamic__Utils__CacheDict_2__Entry : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~System__Dynamic__Utils__CacheDict_2__Entry() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Dynamic__Utils__CacheDict_2__Entry", modifiers: " const&", def_value: None }]
constexpr System__Dynamic__Utils__CacheDict_2__Entry(System__Dynamic__Utils__CacheDict_2__Entry const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Dynamic__Utils__CacheDict_2__Entry", modifiers: "&&", def_value: None }]
constexpr System__Dynamic__Utils__CacheDict_2__Entry(System__Dynamic__Utils__CacheDict_2__Entry&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Dynamic__Utils__CacheDict_2__Entry(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Dynamic__Utils__CacheDict_2__Entry& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Dynamic__Utils__CacheDict_2__Entry& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Dynamic__Utils__CacheDict_2__Entry& operator=(System__Dynamic__Utils__CacheDict_2__Entry&& o) noexcept = default;
  constexpr System__Dynamic__Utils__CacheDict_2__Entry& operator=(System__Dynamic__Utils__CacheDict_2__Entry const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Dynamic::Utils
// Type: System.Dynamic.Utils::CacheDict`2
// Type: System.Dynamic.Utils::CacheDict`2
namespace System::Dynamic::Utils {
// cpp template
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14590))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14590), inst: 80 })
// CS Name: System.Dynamic.Utils.CacheDict`2
class CORDL_TYPE CacheDict_2<TKey,TValue> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Entry = System::Dynamic::Utils::System__Dynamic__Utils__CacheDict_2__Entry<TKey, TValue>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~CacheDict_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "CacheDict_2", modifiers: " const&", def_value: None }]
constexpr CacheDict_2(CacheDict_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CacheDict_2", modifiers: "&&", def_value: None }]
constexpr CacheDict_2(CacheDict_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CacheDict_2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CacheDict_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CacheDict_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CacheDict_2& operator=(CacheDict_2&& o) noexcept = default;
  constexpr CacheDict_2& operator=(CacheDict_2 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__mask, put=__set__mask))  _mask;

constexpr void __set__mask(int32_t value) ;

constexpr int32_t __get__mask() const;

 ::ArrayW<System::Dynamic::Utils::System__Dynamic__Utils__CacheDict_2__Entry<TKey,TValue>> __declspec(property(get=__get__entries, put=__set__entries))  _entries;

constexpr void __set__entries(::ArrayW<System::Dynamic::Utils::System__Dynamic__Utils__CacheDict_2__Entry<TKey,TValue>> value) ;

constexpr ::ArrayW<System::Dynamic::Utils::System__Dynamic__Utils__CacheDict_2__Entry<TKey,TValue>> __get__entries() const;


// Methods

// Ctor Parameters [CppParam { name: "size", ty: "int32_t", modifiers: "", def_value: None }]
explicit CacheDict_2(int32_t size) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t size) ;

/// @brief Method AlignSize addr 0x0 size 0xffffffffffffffff virtual false final false
static int32_t AlignSize(int32_t size) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Dynamic::Utils
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Dynamic::Utils::CacheDict_2, "System.Dynamic.Utils", "CacheDict`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Dynamic::Utils::System__Dynamic__Utils__CacheDict_2__Entry, "System.Dynamic.Utils", "CacheDict`2/Entry");
