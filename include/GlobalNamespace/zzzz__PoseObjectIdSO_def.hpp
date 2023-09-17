#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
// Forward declare root types
namespace GlobalNamespace {
class PoseObjectIdSO;
}
// Type: ::PoseObjectIdSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6017))
// CS Name: PoseObjectIdSO
class CORDL_TYPE PoseObjectIdSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~PoseObjectIdSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "PoseObjectIdSO", modifiers: " const&", def_value: None }]
constexpr PoseObjectIdSO(PoseObjectIdSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PoseObjectIdSO", modifiers: "&&", def_value: None }]
constexpr PoseObjectIdSO(PoseObjectIdSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PoseObjectIdSO(void* ptr) noexcept : ::GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr PoseObjectIdSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PoseObjectIdSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PoseObjectIdSO& operator=(PoseObjectIdSO&& o) noexcept = default;
  constexpr PoseObjectIdSO& operator=(PoseObjectIdSO const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__serializedId, put=__set__serializedId))  _serializedId;

constexpr void __set__serializedId(::StringW value) ;

constexpr ::StringW __get__serializedId() const;


// Properties

 ::StringW __declspec(property(get=get_id))  id;


// Methods

/// @brief Method get_id addr 0x21a64d8 size 0x8 virtual false final false
 ::StringW get_id() ;

// Ctor Parameters []
explicit PoseObjectIdSO() ;

/// @brief Method .ctor addr 0x21a64e0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::PoseObjectIdSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PoseObjectIdSO, "", "PoseObjectIdSO");
