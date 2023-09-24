#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Runtime::Serialization {
class ObjectHolderList;
}
namespace System::Runtime::Serialization {
class ObjectHolder;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class ObjectHolderListEnumerator;
}
// Type: System.Runtime.Serialization::ObjectHolderListEnumerator
namespace System::Runtime::Serialization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3219))
// CS Name: System.Runtime.Serialization.ObjectHolderListEnumerator
class CORDL_TYPE ObjectHolderListEnumerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~ObjectHolderListEnumerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "ObjectHolderListEnumerator", modifiers: " const&", def_value: None }]
constexpr ObjectHolderListEnumerator(ObjectHolderListEnumerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ObjectHolderListEnumerator", modifiers: "&&", def_value: None }]
constexpr ObjectHolderListEnumerator(ObjectHolderListEnumerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ObjectHolderListEnumerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ObjectHolderListEnumerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ObjectHolderListEnumerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ObjectHolderListEnumerator& operator=(ObjectHolderListEnumerator&& o) noexcept = default;
  constexpr ObjectHolderListEnumerator& operator=(ObjectHolderListEnumerator const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_m_isFixupEnumerator, put=__set_m_isFixupEnumerator))  m_isFixupEnumerator;

constexpr void __set_m_isFixupEnumerator(bool value) ;

constexpr bool __get_m_isFixupEnumerator() const;

 System::Runtime::Serialization::ObjectHolderList __declspec(property(get=__get_m_list, put=__set_m_list))  m_list;

constexpr void __set_m_list(System::Runtime::Serialization::ObjectHolderList value) ;

constexpr System::Runtime::Serialization::ObjectHolderList __get_m_list() const;

 int32_t __declspec(property(get=__get_m_startingVersion, put=__set_m_startingVersion))  m_startingVersion;

constexpr void __set_m_startingVersion(int32_t value) ;

constexpr int32_t __get_m_startingVersion() const;

 int32_t __declspec(property(get=__get_m_currPos, put=__set_m_currPos))  m_currPos;

constexpr void __set_m_currPos(int32_t value) ;

constexpr int32_t __get_m_currPos() const;


// Properties

 System::Runtime::Serialization::ObjectHolder __declspec(property(get=get_Current))  Current;


// Methods

static System::Runtime::Serialization::ObjectHolderListEnumerator New_ctor(System::Runtime::Serialization::ObjectHolderList list, bool isFixupEnumerator) ;

/// @brief Method .ctor addr 0x2350ad0 size 0x48 virtual false final false
 void _ctor(System::Runtime::Serialization::ObjectHolderList list, bool isFixupEnumerator) ;

/// @brief Method MoveNext addr 0x234f9b4 size 0xbc virtual false final false
 bool MoveNext() ;

/// @brief Method get_Current addr 0x234f95c size 0x3c virtual false final false
 System::Runtime::Serialization::ObjectHolder get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization
NEED_NO_BOX(System::Runtime::Serialization::ObjectHolderListEnumerator);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::ObjectHolderListEnumerator, "System.Runtime.Serialization", "ObjectHolderListEnumerator");
