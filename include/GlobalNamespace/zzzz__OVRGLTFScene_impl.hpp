#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "GlobalNamespace/zzzz__OVRGLTFScene_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "GlobalNamespace/zzzz__OVRGLTFInputNode_def.hpp"
#include "GlobalNamespace/zzzz__OVRGLTFAnimatinonNode_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
// Ctor Parameters [CppParam { name: "root", ty: "UnityEngine::GameObject", modifiers: "", def_value: Some("csnull") }, CppParam { name: "nodes", ty: "System::Collections::Generic::List_1<UnityEngine::GameObject>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "animationNodes", ty: "System::Collections::Generic::Dictionary_2<GlobalNamespace::OVRGLTFInputNode,GlobalNamespace::OVRGLTFAnimatinonNode>", modifiers: "", def_value: Some("csnull") }]
constexpr GlobalNamespace::OVRGLTFScene::OVRGLTFScene(UnityEngine::GameObject root, System::Collections::Generic::List_1<UnityEngine::GameObject> nodes, System::Collections::Generic::Dictionary_2<GlobalNamespace::OVRGLTFInputNode,GlobalNamespace::OVRGLTFAnimatinonNode> animationNodes) noexcept : ::bs_hook::ValueTypeWrapper() {this->root = root;
this->nodes = nodes;
this->animationNodes = animationNodes;
}
constexpr void GlobalNamespace::OVRGLTFScene::__set_root(UnityEngine::GameObject value)  {
::cordl_internals::setInstanceField<UnityEngine::GameObject, 0x0>(this->__instance, std::forward<UnityEngine::GameObject>(value));
}
constexpr UnityEngine::GameObject GlobalNamespace::OVRGLTFScene::__get_root() const {
return ::cordl_internals::getInstanceField<UnityEngine::GameObject, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::OVRGLTFScene::__set_nodes(System::Collections::Generic::List_1<UnityEngine::GameObject> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<UnityEngine::GameObject>, 0x8>(this->__instance, std::forward<System::Collections::Generic::List_1<UnityEngine::GameObject>>(value));
}
constexpr System::Collections::Generic::List_1<UnityEngine::GameObject> GlobalNamespace::OVRGLTFScene::__get_nodes() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<UnityEngine::GameObject>, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::OVRGLTFScene::__set_animationNodes(System::Collections::Generic::Dictionary_2<GlobalNamespace::OVRGLTFInputNode,GlobalNamespace::OVRGLTFAnimatinonNode> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<GlobalNamespace::OVRGLTFInputNode,GlobalNamespace::OVRGLTFAnimatinonNode>, 0x10>(this->__instance, std::forward<System::Collections::Generic::Dictionary_2<GlobalNamespace::OVRGLTFInputNode,GlobalNamespace::OVRGLTFAnimatinonNode>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<GlobalNamespace::OVRGLTFInputNode,GlobalNamespace::OVRGLTFAnimatinonNode> GlobalNamespace::OVRGLTFScene::__get_animationNodes() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<GlobalNamespace::OVRGLTFInputNode,GlobalNamespace::OVRGLTFAnimatinonNode>, 0x10>(this->__instance);
}
