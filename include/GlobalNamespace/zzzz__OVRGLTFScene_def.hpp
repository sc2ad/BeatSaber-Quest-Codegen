#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
namespace {
namespace GlobalNamespace {
class OVRGLTFAnimatinonNode;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
struct OVRGLTFInputNode;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRGLTFScene;
}
// Type: ::OVRGLTFScene
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8483))
// CS Name: OVRGLTFScene
struct CORDL_TYPE OVRGLTFScene : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "root", ty: "::UnityEngine::GameObject", modifiers: "", def_value: None }, CppParam { name: "nodes", ty: "::System::Collections::Generic::List_1<::UnityEngine::GameObject>", modifiers: "", def_value: None }, CppParam { name: "animationNodes", ty: "::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode,::GlobalNamespace::OVRGLTFAnimatinonNode>", modifiers: "", def_value: None }]
constexpr OVRGLTFScene(::UnityEngine::GameObject root, ::System::Collections::Generic::List_1<::UnityEngine::GameObject> nodes, ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode,::GlobalNamespace::OVRGLTFAnimatinonNode> animationNodes) noexcept;


                    constexpr OVRGLTFScene(OVRGLTFScene const&) = default;
                    constexpr OVRGLTFScene(OVRGLTFScene&&) = default;
                    constexpr OVRGLTFScene& operator=(OVRGLTFScene const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr OVRGLTFScene& operator=(OVRGLTFScene&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit OVRGLTFScene(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::GameObject __declspec(property(get=__get_root, put=__set_root))  root;

constexpr void __set_root(::UnityEngine::GameObject value) ;

constexpr ::UnityEngine::GameObject __get_root() const;

 ::System::Collections::Generic::List_1<::UnityEngine::GameObject> __declspec(property(get=__get_nodes, put=__set_nodes))  nodes;

constexpr void __set_nodes(::System::Collections::Generic::List_1<::UnityEngine::GameObject> value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::GameObject> __get_nodes() const;

 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode,::GlobalNamespace::OVRGLTFAnimatinonNode> __declspec(property(get=__get_animationNodes, put=__set_animationNodes))  animationNodes;

constexpr void __set_animationNodes(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode,::GlobalNamespace::OVRGLTFAnimatinonNode> value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode,::GlobalNamespace::OVRGLTFAnimatinonNode> __get_animationNodes() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRGLTFScene, "", "OVRGLTFScene");
