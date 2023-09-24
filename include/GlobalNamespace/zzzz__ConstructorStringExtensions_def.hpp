#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Pose;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class ConstructorStringExtensions;
}
// Type: ::ConstructorStringExtensions
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13781))
// CS Name: ConstructorStringExtensions
class CORDL_TYPE ConstructorStringExtensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ConstructorStringExtensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "ConstructorStringExtensions", modifiers: " const&", def_value: None }]
constexpr ConstructorStringExtensions(ConstructorStringExtensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ConstructorStringExtensions", modifiers: "&&", def_value: None }]
constexpr ConstructorStringExtensions(ConstructorStringExtensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ConstructorStringExtensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ConstructorStringExtensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ConstructorStringExtensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ConstructorStringExtensions& operator=(ConstructorStringExtensions&& o) noexcept = default;
  constexpr ConstructorStringExtensions& operator=(ConstructorStringExtensions const& o) noexcept = default;
                


// Methods

/// @brief Method ToConstructorString addr 0x1f75e64 size 0xd0 virtual false final false
static ::StringW ToConstructorString(UnityEngine::Vector3 vector) ;

/// @brief Method ToConstructorString addr 0x1f75f34 size 0x1b0 virtual false final false
static ::StringW ToConstructorString(UnityEngine::Quaternion quaternion) ;

/// @brief Method ToConstructorString addr 0x1f760e4 size 0x1a4 virtual false final false
static ::StringW ToConstructorString(UnityEngine::Pose pose) ;

/// @brief Method ToConstructorString addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static ::StringW ToConstructorString(System::Collections::Generic::List_1<T> list) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ConstructorStringExtensions);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ConstructorStringExtensions, "", "ConstructorStringExtensions");
