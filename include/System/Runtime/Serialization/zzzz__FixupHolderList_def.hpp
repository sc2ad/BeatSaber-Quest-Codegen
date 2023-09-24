#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Runtime::Serialization {
class FixupHolder;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class FixupHolderList;
}
// Type: System.Runtime.Serialization::FixupHolderList
namespace System::Runtime::Serialization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3216))
// CS Name: System.Runtime.Serialization.FixupHolderList
class CORDL_TYPE FixupHolderList : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~FixupHolderList() = default;

// Ctor Parameters [CppParam { name: "", ty: "FixupHolderList", modifiers: " const&", def_value: None }]
constexpr FixupHolderList(FixupHolderList const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FixupHolderList", modifiers: "&&", def_value: None }]
constexpr FixupHolderList(FixupHolderList&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FixupHolderList(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr FixupHolderList& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FixupHolderList& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FixupHolderList& operator=(FixupHolderList&& o) noexcept = default;
  constexpr FixupHolderList& operator=(FixupHolderList const& o) noexcept = default;
                


// Fields

 ::ArrayW<System::Runtime::Serialization::FixupHolder> __declspec(property(get=__get_m_values, put=__set_m_values))  m_values;

constexpr void __set_m_values(::ArrayW<System::Runtime::Serialization::FixupHolder> value) ;

constexpr ::ArrayW<System::Runtime::Serialization::FixupHolder> __get_m_values() const;

 int32_t __declspec(property(get=__get_m_count, put=__set_m_count))  m_count;

constexpr void __set_m_count(int32_t value) ;

constexpr int32_t __get_m_count() const;


// Methods

static System::Runtime::Serialization::FixupHolderList New_ctor() ;

/// @brief Method .ctor addr 0x2350590 size 0x8 virtual false final false
 void _ctor() ;

static System::Runtime::Serialization::FixupHolderList New_ctor(int32_t startingSize) ;

/// @brief Method .ctor addr 0x235069c size 0x6c virtual false final false
 void _ctor(int32_t startingSize) ;

/// @brief Method Add addr 0x2350708 size 0xa8 virtual true final false
 void Add(System::Runtime::Serialization::FixupHolder fixup) ;

/// @brief Method EnlargeArray addr 0x23507b0 size 0x88 virtual false final false
 void EnlargeArray() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization
NEED_NO_BOX(System::Runtime::Serialization::FixupHolderList);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::FixupHolderList, "System.Runtime.Serialization", "FixupHolderList");
