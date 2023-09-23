#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class CADArgHolder;
}
// Type: System.Runtime.Remoting.Messaging::CADArgHolder
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3148))
// CS Name: System.Runtime.Remoting.Messaging.CADArgHolder
class CORDL_TYPE CADArgHolder : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~CADArgHolder() = default;

// Ctor Parameters [CppParam { name: "", ty: "CADArgHolder", modifiers: " const&", def_value: None }]
constexpr CADArgHolder(CADArgHolder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CADArgHolder", modifiers: "&&", def_value: None }]
constexpr CADArgHolder(CADArgHolder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CADArgHolder(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CADArgHolder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CADArgHolder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CADArgHolder& operator=(CADArgHolder&& o) noexcept = default;
  constexpr CADArgHolder& operator=(CADArgHolder const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_index, put=__set_index))  index;

constexpr void __set_index(int32_t value) ;

constexpr int32_t __get_index() const;


// Methods

// Ctor Parameters [CppParam { name: "i", ty: "int32_t", modifiers: "", def_value: None }]
explicit CADArgHolder(int32_t i) ;

/// @brief Method .ctor addr 0x233b97c size 0x28 virtual false final false
 void _ctor(int32_t i) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Messaging
NEED_NO_BOX(System::Runtime::Remoting::Messaging::CADArgHolder);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Messaging::CADArgHolder, "System.Runtime.Remoting.Messaging", "CADArgHolder");
