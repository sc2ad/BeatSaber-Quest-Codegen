#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine::_Scripting::APIUpdating {
class APIUpdaterRuntimeHelpers;
}
// Type: UnityEngine._Scripting.APIUpdating::APIUpdaterRuntimeHelpers
namespace UnityEngine::_Scripting::APIUpdating {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10228))
// CS Name: UnityEngine._Scripting.APIUpdating.APIUpdaterRuntimeHelpers
class CORDL_TYPE APIUpdaterRuntimeHelpers : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~APIUpdaterRuntimeHelpers() = default;

// Ctor Parameters [CppParam { name: "", ty: "APIUpdaterRuntimeHelpers", modifiers: " const&", def_value: None }]
constexpr APIUpdaterRuntimeHelpers(APIUpdaterRuntimeHelpers const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "APIUpdaterRuntimeHelpers", modifiers: "&&", def_value: None }]
constexpr APIUpdaterRuntimeHelpers(APIUpdaterRuntimeHelpers&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit APIUpdaterRuntimeHelpers(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr APIUpdaterRuntimeHelpers& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr APIUpdaterRuntimeHelpers& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr APIUpdaterRuntimeHelpers& operator=(APIUpdaterRuntimeHelpers&& o) noexcept = default;
  constexpr APIUpdaterRuntimeHelpers& operator=(APIUpdaterRuntimeHelpers const& o) noexcept = default;
                


// Methods

/// @brief Method GetMovedFromAttributeDataForType addr 0x2b6e208 size 0x140 virtual false final false
static bool GetMovedFromAttributeDataForType(System::Type sourceType, ByRef<::StringW> assembly, ByRef<::StringW> nsp, ByRef<::StringW> klass) ;

/// @brief Method GetObsoleteTypeRedirection addr 0x2b6e348 size 0x2bc virtual false final false
static bool GetObsoleteTypeRedirection(System::Type sourceType, ByRef<::StringW> assemblyName, ByRef<::StringW> nsp, ByRef<::StringW> className) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::_Scripting::APIUpdating
NEED_NO_BOX(UnityEngine::_Scripting::APIUpdating::APIUpdaterRuntimeHelpers);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::_Scripting::APIUpdating::APIUpdaterRuntimeHelpers, "UnityEngine._Scripting.APIUpdating", "APIUpdaterRuntimeHelpers");
