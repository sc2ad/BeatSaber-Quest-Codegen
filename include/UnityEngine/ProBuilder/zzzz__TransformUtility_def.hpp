#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace UnityEngine::ProBuilder {
class Vertex;
}
namespace UnityEngine {
class Transform;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class TransformUtility;
}
// Type: UnityEngine.ProBuilder::TransformUtility
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12150))
// CS Name: UnityEngine.ProBuilder.TransformUtility
class CORDL_TYPE TransformUtility : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TransformUtility() = default;

// Ctor Parameters [CppParam { name: "", ty: "TransformUtility", modifiers: " const&", def_value: None }]
constexpr TransformUtility(TransformUtility const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TransformUtility", modifiers: "&&", def_value: None }]
constexpr TransformUtility(TransformUtility&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TransformUtility(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TransformUtility& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TransformUtility& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TransformUtility& operator=(TransformUtility&& o) noexcept = default;
  constexpr TransformUtility& operator=(TransformUtility const& o) noexcept = default;
                


// Fields

static System::Collections::Generic::Dictionary_2<UnityEngine::Transform,::ArrayW<UnityEngine::Transform>> __declspec(property(get=__get_s_ChildStack, put=__set_s_ChildStack))  s_ChildStack;

static void __set_s_ChildStack(System::Collections::Generic::Dictionary_2<UnityEngine::Transform,::ArrayW<UnityEngine::Transform>> value) ;

static System::Collections::Generic::Dictionary_2<UnityEngine::Transform,::ArrayW<UnityEngine::Transform>> __get_s_ChildStack() ;


// Methods

/// @brief Method UnparentChildren addr 0x29e7968 size 0x150 virtual false final false
static void UnparentChildren(UnityEngine::Transform t) ;

/// @brief Method ReparentChildren addr 0x29e7ab8 size 0x128 virtual false final false
static void ReparentChildren(UnityEngine::Transform t) ;

/// @brief Method TransformVertex addr 0x29e7be0 size 0x1e4 virtual false final false
static UnityEngine::ProBuilder::Vertex TransformVertex(UnityEngine::Transform transform, UnityEngine::ProBuilder::Vertex vertex) ;

/// @brief Method InverseTransformVertex addr 0x29e7dc4 size 0x1dc virtual false final false
static UnityEngine::ProBuilder::Vertex InverseTransformVertex(UnityEngine::Transform transform, UnityEngine::ProBuilder::Vertex vertex) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
NEED_NO_BOX(UnityEngine::ProBuilder::TransformUtility);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::TransformUtility, "UnityEngine.ProBuilder", "TransformUtility");
