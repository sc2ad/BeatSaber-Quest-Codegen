#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Runtime::Serialization {
class ObjectHolderListEnumerator;
}
namespace System::Runtime::Serialization {
class ObjectHolder;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class ObjectHolderList;
}
// Type: System.Runtime.Serialization::ObjectHolderList
namespace System::Runtime::Serialization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3218))
// CS Name: System.Runtime.Serialization.ObjectHolderList
class CORDL_TYPE ObjectHolderList : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ObjectHolderList() = default;

// Ctor Parameters [CppParam { name: "", ty: "ObjectHolderList", modifiers: " const&", def_value: None }]
constexpr ObjectHolderList(ObjectHolderList const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ObjectHolderList", modifiers: "&&", def_value: None }]
constexpr ObjectHolderList(ObjectHolderList&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ObjectHolderList(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ObjectHolderList& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ObjectHolderList& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ObjectHolderList& operator=(ObjectHolderList&& o) noexcept = default;
  constexpr ObjectHolderList& operator=(ObjectHolderList const& o) noexcept = default;
                


// Fields

 ::ArrayW<System::Runtime::Serialization::ObjectHolder> __declspec(property(get=__get_m_values, put=__set_m_values))  m_values;

constexpr void __set_m_values(::ArrayW<System::Runtime::Serialization::ObjectHolder> value) ;

constexpr ::ArrayW<System::Runtime::Serialization::ObjectHolder> __get_m_values() const;

 int32_t __declspec(property(get=__get_m_count, put=__set_m_count))  m_count;

constexpr void __set_m_count(int32_t value) ;

constexpr int32_t __get_m_count() const;


// Properties

 int32_t __declspec(property(get=get_Version))  Version;

 int32_t __declspec(property(get=get_Count))  Count;


// Methods

// Ctor Parameters []
explicit ObjectHolderList() ;

/// @brief Method .ctor addr 0x234cae8 size 0x8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "startingSize", ty: "int32_t", modifiers: "", def_value: None }]
explicit ObjectHolderList(int32_t startingSize) ;

/// @brief Method .ctor addr 0x2350934 size 0x6c virtual false final false
 void _ctor(int32_t startingSize) ;

/// @brief Method Add addr 0x23509a0 size 0xa8 virtual true final false
 void Add(System::Runtime::Serialization::ObjectHolder value) ;

/// @brief Method GetFixupEnumerator addr 0x234f8f8 size 0x64 virtual false final false
 System::Runtime::Serialization::ObjectHolderListEnumerator GetFixupEnumerator() ;

/// @brief Method EnlargeArray addr 0x2350a48 size 0x88 virtual false final false
 void EnlargeArray() ;

/// @brief Method get_Version addr 0x2350b18 size 0x8 virtual false final false
 int32_t get_Version() ;

/// @brief Method get_Count addr 0x2350b20 size 0x8 virtual false final false
 int32_t get_Count() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization
NEED_NO_BOX(System::Runtime::Serialization::ObjectHolderList);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::ObjectHolderList, "System.Runtime.Serialization", "ObjectHolderList");
