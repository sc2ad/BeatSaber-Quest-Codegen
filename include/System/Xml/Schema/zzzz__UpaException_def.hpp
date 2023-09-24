#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
// Forward declare root types
namespace System::Xml::Schema {
class UpaException;
}
// Type: System.Xml.Schema::UpaException
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2560))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11537))
// CS Name: System.Xml.Schema.UpaException
class CORDL_TYPE UpaException : public System::Exception {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~UpaException() = default;

// Ctor Parameters [CppParam { name: "", ty: "UpaException", modifiers: " const&", def_value: None }]
constexpr UpaException(UpaException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UpaException", modifiers: "&&", def_value: None }]
constexpr UpaException(UpaException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UpaException(void* ptr) noexcept : System::Exception(ptr) {
}


  constexpr UpaException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UpaException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UpaException& operator=(UpaException&& o) noexcept = default;
  constexpr UpaException& operator=(UpaException const& o) noexcept = default;
                


// Fields

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_particle1, put=__set_particle1))  particle1;

constexpr void __set_particle1(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_particle1() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_particle2, put=__set_particle2))  particle2;

constexpr void __set_particle2(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_particle2() const;


// Methods

static System::Xml::Schema::UpaException New_ctor(::bs_hook::Il2CppWrapperType particle1, ::bs_hook::Il2CppWrapperType particle2) ;

/// @brief Method .ctor addr 0x2719144 size 0x70 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType particle1, ::bs_hook::Il2CppWrapperType particle2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
NEED_NO_BOX(System::Xml::Schema::UpaException);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::UpaException, "System.Xml.Schema", "UpaException");
