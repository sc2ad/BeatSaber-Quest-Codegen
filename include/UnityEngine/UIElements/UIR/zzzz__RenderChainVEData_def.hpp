#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UIElements::UIR {
class MeshHandle;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine::UIElements::UIR {
struct RenderChainTextEntry;
}
namespace UnityEngine::UIElements::UIR {
template<typename T>
class BasicNode_1;
}
namespace UnityEngine::UIElements::UIR {
class RenderChainCommand;
}
namespace UnityEngine::UIElements::UIR {
struct BMPAlloc;
}
namespace UnityEngine::UIElements::UIR {
struct RenderDataDirtyTypes;
}
namespace UnityEngine::UIElements::UIR::Implementation {
struct ClipMethod;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine::UIElements::UIR {
struct TextureEntry;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
struct RenderChainVEData;
}
// Type: UnityEngine.UIElements.UIR::RenderChainVEData
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7496))
// CS Name: UnityEngine.UIElements.UIR.RenderChainVEData
struct CORDL_TYPE RenderChainVEData : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "prev", ty: "UnityEngine::UIElements::VisualElement", modifiers: "", def_value: None }, CppParam { name: "next", ty: "UnityEngine::UIElements::VisualElement", modifiers: "", def_value: None }, CppParam { name: "groupTransformAncestor", ty: "UnityEngine::UIElements::VisualElement", modifiers: "", def_value: None }, CppParam { name: "boneTransformAncestor", ty: "UnityEngine::UIElements::VisualElement", modifiers: "", def_value: None }, CppParam { name: "prevDirty", ty: "UnityEngine::UIElements::VisualElement", modifiers: "", def_value: None }, CppParam { name: "nextDirty", ty: "UnityEngine::UIElements::VisualElement", modifiers: "", def_value: None }, CppParam { name: "hierarchyDepth", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "dirtiedValues", ty: "UnityEngine::UIElements::UIR::RenderDataDirtyTypes", modifiers: "", def_value: None }, CppParam { name: "dirtyID", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "firstCommand", ty: "UnityEngine::UIElements::UIR::RenderChainCommand", modifiers: "", def_value: None }, CppParam { name: "lastCommand", ty: "UnityEngine::UIElements::UIR::RenderChainCommand", modifiers: "", def_value: None }, CppParam { name: "firstClosingCommand", ty: "UnityEngine::UIElements::UIR::RenderChainCommand", modifiers: "", def_value: None }, CppParam { name: "lastClosingCommand", ty: "UnityEngine::UIElements::UIR::RenderChainCommand", modifiers: "", def_value: None }, CppParam { name: "isInChain", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isHierarchyHidden", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "localFlipsWinding", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "localTransformScaleZero", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "worldFlipsWinding", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "clipMethod", ty: "UnityEngine::UIElements::UIR::Implementation::ClipMethod", modifiers: "", def_value: None }, CppParam { name: "childrenStencilRef", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "childrenMaskDepth", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "disableNudging", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "usesLegacyText", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "data", ty: "UnityEngine::UIElements::UIR::MeshHandle", modifiers: "", def_value: None }, CppParam { name: "closingData", ty: "UnityEngine::UIElements::UIR::MeshHandle", modifiers: "", def_value: None }, CppParam { name: "verticesSpace", ty: "UnityEngine::Matrix4x4", modifiers: "", def_value: None }, CppParam { name: "displacementUVStart", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "displacementUVEnd", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "transformID", ty: "UnityEngine::UIElements::UIR::BMPAlloc", modifiers: "", def_value: None }, CppParam { name: "clipRectID", ty: "UnityEngine::UIElements::UIR::BMPAlloc", modifiers: "", def_value: None }, CppParam { name: "opacityID", ty: "UnityEngine::UIElements::UIR::BMPAlloc", modifiers: "", def_value: None }, CppParam { name: "textCoreSettingsID", ty: "UnityEngine::UIElements::UIR::BMPAlloc", modifiers: "", def_value: None }, CppParam { name: "backgroundColorID", ty: "UnityEngine::UIElements::UIR::BMPAlloc", modifiers: "", def_value: None }, CppParam { name: "borderLeftColorID", ty: "UnityEngine::UIElements::UIR::BMPAlloc", modifiers: "", def_value: None }, CppParam { name: "borderTopColorID", ty: "UnityEngine::UIElements::UIR::BMPAlloc", modifiers: "", def_value: None }, CppParam { name: "borderRightColorID", ty: "UnityEngine::UIElements::UIR::BMPAlloc", modifiers: "", def_value: None }, CppParam { name: "borderBottomColorID", ty: "UnityEngine::UIElements::UIR::BMPAlloc", modifiers: "", def_value: None }, CppParam { name: "tintColorID", ty: "UnityEngine::UIElements::UIR::BMPAlloc", modifiers: "", def_value: None }, CppParam { name: "compositeOpacity", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "backgroundColor", ty: "UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "prevText", ty: "UnityEngine::UIElements::VisualElement", modifiers: "", def_value: None }, CppParam { name: "nextText", ty: "UnityEngine::UIElements::VisualElement", modifiers: "", def_value: None }, CppParam { name: "textEntries", ty: "System::Collections::Generic::List_1<UnityEngine::UIElements::UIR::RenderChainTextEntry>", modifiers: "", def_value: None }, CppParam { name: "textures", ty: "UnityEngine::UIElements::UIR::BasicNode_1<UnityEngine::UIElements::UIR::TextureEntry>", modifiers: "", def_value: None }]
constexpr RenderChainVEData(UnityEngine::UIElements::VisualElement prev, UnityEngine::UIElements::VisualElement next, UnityEngine::UIElements::VisualElement groupTransformAncestor, UnityEngine::UIElements::VisualElement boneTransformAncestor, UnityEngine::UIElements::VisualElement prevDirty, UnityEngine::UIElements::VisualElement nextDirty, int32_t hierarchyDepth, UnityEngine::UIElements::UIR::RenderDataDirtyTypes dirtiedValues, uint32_t dirtyID, UnityEngine::UIElements::UIR::RenderChainCommand firstCommand, UnityEngine::UIElements::UIR::RenderChainCommand lastCommand, UnityEngine::UIElements::UIR::RenderChainCommand firstClosingCommand, UnityEngine::UIElements::UIR::RenderChainCommand lastClosingCommand, bool isInChain, bool isHierarchyHidden, bool localFlipsWinding, bool localTransformScaleZero, bool worldFlipsWinding, UnityEngine::UIElements::UIR::Implementation::ClipMethod clipMethod, int32_t childrenStencilRef, int32_t childrenMaskDepth, bool disableNudging, bool usesLegacyText, UnityEngine::UIElements::UIR::MeshHandle data, UnityEngine::UIElements::UIR::MeshHandle closingData, UnityEngine::Matrix4x4 verticesSpace, int32_t displacementUVStart, int32_t displacementUVEnd, UnityEngine::UIElements::UIR::BMPAlloc transformID, UnityEngine::UIElements::UIR::BMPAlloc clipRectID, UnityEngine::UIElements::UIR::BMPAlloc opacityID, UnityEngine::UIElements::UIR::BMPAlloc textCoreSettingsID, UnityEngine::UIElements::UIR::BMPAlloc backgroundColorID, UnityEngine::UIElements::UIR::BMPAlloc borderLeftColorID, UnityEngine::UIElements::UIR::BMPAlloc borderTopColorID, UnityEngine::UIElements::UIR::BMPAlloc borderRightColorID, UnityEngine::UIElements::UIR::BMPAlloc borderBottomColorID, UnityEngine::UIElements::UIR::BMPAlloc tintColorID, float_t compositeOpacity, UnityEngine::Color backgroundColor, UnityEngine::UIElements::VisualElement prevText, UnityEngine::UIElements::VisualElement nextText, System::Collections::Generic::List_1<UnityEngine::UIElements::UIR::RenderChainTextEntry> textEntries, UnityEngine::UIElements::UIR::BasicNode_1<UnityEngine::UIElements::UIR::TextureEntry> textures) noexcept;


                    constexpr RenderChainVEData(RenderChainVEData const&) = default;
                    constexpr RenderChainVEData(RenderChainVEData&&) = default;
                    constexpr RenderChainVEData& operator=(RenderChainVEData const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr RenderChainVEData& operator=(RenderChainVEData&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x158};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit RenderChainVEData(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::UIElements::VisualElement __declspec(property(get=__get_prev, put=__set_prev))  prev;

constexpr void __set_prev(UnityEngine::UIElements::VisualElement value) ;

constexpr UnityEngine::UIElements::VisualElement __get_prev() const;

 UnityEngine::UIElements::VisualElement __declspec(property(get=__get_next, put=__set_next))  next;

constexpr void __set_next(UnityEngine::UIElements::VisualElement value) ;

constexpr UnityEngine::UIElements::VisualElement __get_next() const;

 UnityEngine::UIElements::VisualElement __declspec(property(get=__get_groupTransformAncestor, put=__set_groupTransformAncestor))  groupTransformAncestor;

constexpr void __set_groupTransformAncestor(UnityEngine::UIElements::VisualElement value) ;

constexpr UnityEngine::UIElements::VisualElement __get_groupTransformAncestor() const;

 UnityEngine::UIElements::VisualElement __declspec(property(get=__get_boneTransformAncestor, put=__set_boneTransformAncestor))  boneTransformAncestor;

constexpr void __set_boneTransformAncestor(UnityEngine::UIElements::VisualElement value) ;

constexpr UnityEngine::UIElements::VisualElement __get_boneTransformAncestor() const;

 UnityEngine::UIElements::VisualElement __declspec(property(get=__get_prevDirty, put=__set_prevDirty))  prevDirty;

constexpr void __set_prevDirty(UnityEngine::UIElements::VisualElement value) ;

constexpr UnityEngine::UIElements::VisualElement __get_prevDirty() const;

 UnityEngine::UIElements::VisualElement __declspec(property(get=__get_nextDirty, put=__set_nextDirty))  nextDirty;

constexpr void __set_nextDirty(UnityEngine::UIElements::VisualElement value) ;

constexpr UnityEngine::UIElements::VisualElement __get_nextDirty() const;

 int32_t __declspec(property(get=__get_hierarchyDepth, put=__set_hierarchyDepth))  hierarchyDepth;

constexpr void __set_hierarchyDepth(int32_t value) ;

constexpr int32_t __get_hierarchyDepth() const;

 UnityEngine::UIElements::UIR::RenderDataDirtyTypes __declspec(property(get=__get_dirtiedValues, put=__set_dirtiedValues))  dirtiedValues;

constexpr void __set_dirtiedValues(UnityEngine::UIElements::UIR::RenderDataDirtyTypes value) ;

constexpr UnityEngine::UIElements::UIR::RenderDataDirtyTypes __get_dirtiedValues() const;

 uint32_t __declspec(property(get=__get_dirtyID, put=__set_dirtyID))  dirtyID;

constexpr void __set_dirtyID(uint32_t value) ;

constexpr uint32_t __get_dirtyID() const;

 UnityEngine::UIElements::UIR::RenderChainCommand __declspec(property(get=__get_firstCommand, put=__set_firstCommand))  firstCommand;

constexpr void __set_firstCommand(UnityEngine::UIElements::UIR::RenderChainCommand value) ;

constexpr UnityEngine::UIElements::UIR::RenderChainCommand __get_firstCommand() const;

 UnityEngine::UIElements::UIR::RenderChainCommand __declspec(property(get=__get_lastCommand, put=__set_lastCommand))  lastCommand;

constexpr void __set_lastCommand(UnityEngine::UIElements::UIR::RenderChainCommand value) ;

constexpr UnityEngine::UIElements::UIR::RenderChainCommand __get_lastCommand() const;

 UnityEngine::UIElements::UIR::RenderChainCommand __declspec(property(get=__get_firstClosingCommand, put=__set_firstClosingCommand))  firstClosingCommand;

constexpr void __set_firstClosingCommand(UnityEngine::UIElements::UIR::RenderChainCommand value) ;

constexpr UnityEngine::UIElements::UIR::RenderChainCommand __get_firstClosingCommand() const;

 UnityEngine::UIElements::UIR::RenderChainCommand __declspec(property(get=__get_lastClosingCommand, put=__set_lastClosingCommand))  lastClosingCommand;

constexpr void __set_lastClosingCommand(UnityEngine::UIElements::UIR::RenderChainCommand value) ;

constexpr UnityEngine::UIElements::UIR::RenderChainCommand __get_lastClosingCommand() const;

 bool __declspec(property(get=__get_isInChain, put=__set_isInChain))  isInChain;

constexpr void __set_isInChain(bool value) ;

constexpr bool __get_isInChain() const;

 bool __declspec(property(get=__get_isHierarchyHidden, put=__set_isHierarchyHidden))  isHierarchyHidden;

constexpr void __set_isHierarchyHidden(bool value) ;

constexpr bool __get_isHierarchyHidden() const;

 bool __declspec(property(get=__get_localFlipsWinding, put=__set_localFlipsWinding))  localFlipsWinding;

constexpr void __set_localFlipsWinding(bool value) ;

constexpr bool __get_localFlipsWinding() const;

 bool __declspec(property(get=__get_localTransformScaleZero, put=__set_localTransformScaleZero))  localTransformScaleZero;

constexpr void __set_localTransformScaleZero(bool value) ;

constexpr bool __get_localTransformScaleZero() const;

 bool __declspec(property(get=__get_worldFlipsWinding, put=__set_worldFlipsWinding))  worldFlipsWinding;

constexpr void __set_worldFlipsWinding(bool value) ;

constexpr bool __get_worldFlipsWinding() const;

 UnityEngine::UIElements::UIR::Implementation::ClipMethod __declspec(property(get=__get_clipMethod, put=__set_clipMethod))  clipMethod;

constexpr void __set_clipMethod(UnityEngine::UIElements::UIR::Implementation::ClipMethod value) ;

constexpr UnityEngine::UIElements::UIR::Implementation::ClipMethod __get_clipMethod() const;

 int32_t __declspec(property(get=__get_childrenStencilRef, put=__set_childrenStencilRef))  childrenStencilRef;

constexpr void __set_childrenStencilRef(int32_t value) ;

constexpr int32_t __get_childrenStencilRef() const;

 int32_t __declspec(property(get=__get_childrenMaskDepth, put=__set_childrenMaskDepth))  childrenMaskDepth;

constexpr void __set_childrenMaskDepth(int32_t value) ;

constexpr int32_t __get_childrenMaskDepth() const;

 bool __declspec(property(get=__get_disableNudging, put=__set_disableNudging))  disableNudging;

constexpr void __set_disableNudging(bool value) ;

constexpr bool __get_disableNudging() const;

 bool __declspec(property(get=__get_usesLegacyText, put=__set_usesLegacyText))  usesLegacyText;

constexpr void __set_usesLegacyText(bool value) ;

constexpr bool __get_usesLegacyText() const;

 UnityEngine::UIElements::UIR::MeshHandle __declspec(property(get=__get_data, put=__set_data))  data;

constexpr void __set_data(UnityEngine::UIElements::UIR::MeshHandle value) ;

constexpr UnityEngine::UIElements::UIR::MeshHandle __get_data() const;

 UnityEngine::UIElements::UIR::MeshHandle __declspec(property(get=__get_closingData, put=__set_closingData))  closingData;

constexpr void __set_closingData(UnityEngine::UIElements::UIR::MeshHandle value) ;

constexpr UnityEngine::UIElements::UIR::MeshHandle __get_closingData() const;

 UnityEngine::Matrix4x4 __declspec(property(get=__get_verticesSpace, put=__set_verticesSpace))  verticesSpace;

constexpr void __set_verticesSpace(UnityEngine::Matrix4x4 value) ;

constexpr UnityEngine::Matrix4x4 __get_verticesSpace() const;

 int32_t __declspec(property(get=__get_displacementUVStart, put=__set_displacementUVStart))  displacementUVStart;

constexpr void __set_displacementUVStart(int32_t value) ;

constexpr int32_t __get_displacementUVStart() const;

 int32_t __declspec(property(get=__get_displacementUVEnd, put=__set_displacementUVEnd))  displacementUVEnd;

constexpr void __set_displacementUVEnd(int32_t value) ;

constexpr int32_t __get_displacementUVEnd() const;

 UnityEngine::UIElements::UIR::BMPAlloc __declspec(property(get=__get_transformID, put=__set_transformID))  transformID;

constexpr void __set_transformID(UnityEngine::UIElements::UIR::BMPAlloc value) ;

constexpr UnityEngine::UIElements::UIR::BMPAlloc __get_transformID() const;

 UnityEngine::UIElements::UIR::BMPAlloc __declspec(property(get=__get_clipRectID, put=__set_clipRectID))  clipRectID;

constexpr void __set_clipRectID(UnityEngine::UIElements::UIR::BMPAlloc value) ;

constexpr UnityEngine::UIElements::UIR::BMPAlloc __get_clipRectID() const;

 UnityEngine::UIElements::UIR::BMPAlloc __declspec(property(get=__get_opacityID, put=__set_opacityID))  opacityID;

constexpr void __set_opacityID(UnityEngine::UIElements::UIR::BMPAlloc value) ;

constexpr UnityEngine::UIElements::UIR::BMPAlloc __get_opacityID() const;

 UnityEngine::UIElements::UIR::BMPAlloc __declspec(property(get=__get_textCoreSettingsID, put=__set_textCoreSettingsID))  textCoreSettingsID;

constexpr void __set_textCoreSettingsID(UnityEngine::UIElements::UIR::BMPAlloc value) ;

constexpr UnityEngine::UIElements::UIR::BMPAlloc __get_textCoreSettingsID() const;

 UnityEngine::UIElements::UIR::BMPAlloc __declspec(property(get=__get_backgroundColorID, put=__set_backgroundColorID))  backgroundColorID;

constexpr void __set_backgroundColorID(UnityEngine::UIElements::UIR::BMPAlloc value) ;

constexpr UnityEngine::UIElements::UIR::BMPAlloc __get_backgroundColorID() const;

 UnityEngine::UIElements::UIR::BMPAlloc __declspec(property(get=__get_borderLeftColorID, put=__set_borderLeftColorID))  borderLeftColorID;

constexpr void __set_borderLeftColorID(UnityEngine::UIElements::UIR::BMPAlloc value) ;

constexpr UnityEngine::UIElements::UIR::BMPAlloc __get_borderLeftColorID() const;

 UnityEngine::UIElements::UIR::BMPAlloc __declspec(property(get=__get_borderTopColorID, put=__set_borderTopColorID))  borderTopColorID;

constexpr void __set_borderTopColorID(UnityEngine::UIElements::UIR::BMPAlloc value) ;

constexpr UnityEngine::UIElements::UIR::BMPAlloc __get_borderTopColorID() const;

 UnityEngine::UIElements::UIR::BMPAlloc __declspec(property(get=__get_borderRightColorID, put=__set_borderRightColorID))  borderRightColorID;

constexpr void __set_borderRightColorID(UnityEngine::UIElements::UIR::BMPAlloc value) ;

constexpr UnityEngine::UIElements::UIR::BMPAlloc __get_borderRightColorID() const;

 UnityEngine::UIElements::UIR::BMPAlloc __declspec(property(get=__get_borderBottomColorID, put=__set_borderBottomColorID))  borderBottomColorID;

constexpr void __set_borderBottomColorID(UnityEngine::UIElements::UIR::BMPAlloc value) ;

constexpr UnityEngine::UIElements::UIR::BMPAlloc __get_borderBottomColorID() const;

 UnityEngine::UIElements::UIR::BMPAlloc __declspec(property(get=__get_tintColorID, put=__set_tintColorID))  tintColorID;

constexpr void __set_tintColorID(UnityEngine::UIElements::UIR::BMPAlloc value) ;

constexpr UnityEngine::UIElements::UIR::BMPAlloc __get_tintColorID() const;

 float_t __declspec(property(get=__get_compositeOpacity, put=__set_compositeOpacity))  compositeOpacity;

constexpr void __set_compositeOpacity(float_t value) ;

constexpr float_t __get_compositeOpacity() const;

 UnityEngine::Color __declspec(property(get=__get_backgroundColor, put=__set_backgroundColor))  backgroundColor;

constexpr void __set_backgroundColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get_backgroundColor() const;

 UnityEngine::UIElements::VisualElement __declspec(property(get=__get_prevText, put=__set_prevText))  prevText;

constexpr void __set_prevText(UnityEngine::UIElements::VisualElement value) ;

constexpr UnityEngine::UIElements::VisualElement __get_prevText() const;

 UnityEngine::UIElements::VisualElement __declspec(property(get=__get_nextText, put=__set_nextText))  nextText;

constexpr void __set_nextText(UnityEngine::UIElements::VisualElement value) ;

constexpr UnityEngine::UIElements::VisualElement __get_nextText() const;

 System::Collections::Generic::List_1<UnityEngine::UIElements::UIR::RenderChainTextEntry> __declspec(property(get=__get_textEntries, put=__set_textEntries))  textEntries;

constexpr void __set_textEntries(System::Collections::Generic::List_1<UnityEngine::UIElements::UIR::RenderChainTextEntry> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::UIElements::UIR::RenderChainTextEntry> __get_textEntries() const;

 UnityEngine::UIElements::UIR::BasicNode_1<UnityEngine::UIElements::UIR::TextureEntry> __declspec(property(get=__get_textures, put=__set_textures))  textures;

constexpr void __set_textures(UnityEngine::UIElements::UIR::BasicNode_1<UnityEngine::UIElements::UIR::TextureEntry> value) ;

constexpr UnityEngine::UIElements::UIR::BasicNode_1<UnityEngine::UIElements::UIR::TextureEntry> __get_textures() const;


// Properties

 UnityEngine::UIElements::UIR::RenderChainCommand __declspec(property(get=get_lastClosingOrLastCommand))  lastClosingOrLastCommand;


// Methods

/// @brief Method get_lastClosingOrLastCommand addr 0x2d1ac18 size 0x18 virtual false final false
 UnityEngine::UIElements::UIR::RenderChainCommand get_lastClosingOrLastCommand() ;

/// @brief Method AllocatesID addr 0x2d1ac30 size 0x34 virtual false final false
static bool AllocatesID(UnityEngine::UIElements::UIR::BMPAlloc alloc) ;

/// @brief Method InheritsID addr 0x2d1ac64 size 0x30 virtual false final false
static bool InheritsID(UnityEngine::UIElements::UIR::BMPAlloc alloc) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UIR::RenderChainVEData, "UnityEngine.UIElements.UIR", "RenderChainVEData");
