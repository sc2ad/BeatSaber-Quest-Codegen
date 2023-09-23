#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace UnityEngine::Events {
class UnityEventTools;
}
// Type: UnityEngine.Events::UnityEventTools
namespace UnityEngine::Events {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10384))
// CS Name: UnityEngine.Events.UnityEventTools
class CORDL_TYPE UnityEventTools : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEventTools() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEventTools", modifiers: " const&", def_value: None }]
constexpr UnityEventTools(UnityEventTools const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEventTools", modifiers: "&&", def_value: None }]
constexpr UnityEventTools(UnityEventTools&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEventTools(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEventTools& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEventTools& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEventTools& operator=(UnityEventTools&& o) noexcept = default;
  constexpr UnityEventTools& operator=(UnityEventTools const& o) noexcept = default;
                


// Methods

/// @brief Method TidyAssemblyTypeName addr 0x2b7f038 size 0x228 virtual false final false
static ::StringW TidyAssemblyTypeName(::StringW assemblyTypeName) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
NEED_NO_BOX(UnityEngine::Events::UnityEventTools);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Events::UnityEventTools, "UnityEngine.Events", "UnityEventTools");
