#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Collections {
class IEnumerator;
}
// Forward declare root types
namespace System::Xml {
class EmptyEnumerator;
}
// Type: System.Xml::EmptyEnumerator
namespace System::Xml {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11472))
// CS Name: System.Xml.EmptyEnumerator
class CORDL_TYPE EmptyEnumerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~EmptyEnumerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "EmptyEnumerator", modifiers: " const&", def_value: None }]
constexpr EmptyEnumerator(EmptyEnumerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EmptyEnumerator", modifiers: "&&", def_value: None }]
constexpr EmptyEnumerator(EmptyEnumerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EmptyEnumerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EmptyEnumerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EmptyEnumerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EmptyEnumerator& operator=(EmptyEnumerator&& o) noexcept = default;
  constexpr EmptyEnumerator& operator=(EmptyEnumerator const& o) noexcept = default;
                


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method System.Collections.IEnumerator.MoveNext addr 0x26fe9e8 size 0x8 virtual true final true
 bool System_Collections_IEnumerator_MoveNext() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x26fe9f0 size 0x4 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x26fe9f4 size 0x60 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static System::Xml::EmptyEnumerator New_ctor() ;

/// @brief Method .ctor addr 0x26fea54 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
NEED_NO_BOX(System::Xml::EmptyEnumerator);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::EmptyEnumerator, "System.Xml", "EmptyEnumerator");
