#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
// Forward declare root types
namespace System::Runtime::Serialization {
class LongList;
}
// Type: System.Runtime.Serialization::LongList
namespace System::Runtime::Serialization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3217))
// CS Name: System.Runtime.Serialization.LongList
class CORDL_TYPE LongList : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~LongList() = default;

// Ctor Parameters [CppParam { name: "", ty: "LongList", modifiers: " const&", def_value: None }]
constexpr LongList(LongList const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LongList", modifiers: "&&", def_value: None }]
constexpr LongList(LongList&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LongList(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LongList& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LongList& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LongList& operator=(LongList&& o) noexcept = default;
  constexpr LongList& operator=(LongList const& o) noexcept = default;
                


// Fields

 ::ArrayW<int64_t> __declspec(property(get=__get_m_values, put=__set_m_values))  m_values;

constexpr void __set_m_values(::ArrayW<int64_t> value) ;

constexpr ::ArrayW<int64_t> __get_m_values() const;

 int32_t __declspec(property(get=__get_m_count, put=__set_m_count))  m_count;

constexpr void __set_m_count(int32_t value) ;

constexpr int32_t __get_m_count() const;

 int32_t __declspec(property(get=__get_m_totalItems, put=__set_m_totalItems))  m_totalItems;

constexpr void __set_m_totalItems(int32_t value) ;

constexpr int32_t __get_m_totalItems() const;

 int32_t __declspec(property(get=__get_m_currentItem, put=__set_m_currentItem))  m_currentItem;

constexpr void __set_m_currentItem(int32_t value) ;

constexpr int32_t __get_m_currentItem() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 int64_t __declspec(property(get=get_Current))  Current;


// Methods

// Ctor Parameters []
explicit LongList() ;

/// @brief Method .ctor addr 0x23505b0 size 0x8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "startingSize", ty: "int32_t", modifiers: "", def_value: None }]
explicit LongList(int32_t startingSize) ;

/// @brief Method .ctor addr 0x2350838 size 0x6c virtual false final false
 void _ctor(int32_t startingSize) ;

/// @brief Method Add addr 0x23505b8 size 0x80 virtual false final false
 void Add(int64_t value) ;

/// @brief Method get_Count addr 0x235092c size 0x8 virtual false final false
 int32_t get_Count() ;

/// @brief Method StartEnumeration addr 0x234e82c size 0xc virtual false final false
 void StartEnumeration() ;

/// @brief Method MoveNext addr 0x234e878 size 0x68 virtual false final false
 bool MoveNext() ;

/// @brief Method get_Current addr 0x234e838 size 0x34 virtual false final false
 int64_t get_Current() ;

/// @brief Method RemoveElement addr 0x2350500 size 0x90 virtual false final false
 bool RemoveElement(int64_t value) ;

/// @brief Method EnlargeArray addr 0x23508a4 size 0x88 virtual false final false
 void EnlargeArray() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization
NEED_NO_BOX(System::Runtime::Serialization::LongList);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::LongList, "System.Runtime.Serialization", "LongList");
