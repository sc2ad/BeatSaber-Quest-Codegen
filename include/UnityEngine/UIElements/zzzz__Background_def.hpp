#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
class RenderTexture;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine::UIElements {
class VectorImage;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct Background;
}
// Type: UnityEngine.UIElements::Background
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7392))
// CS Name: UnityEngine.UIElements.Background
struct CORDL_TYPE Background : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IEquatable_1<UnityEngine::UIElements::Background>
constexpr operator  System::IEquatable_1<UnityEngine::UIElements::Background>() const;

// Ctor Parameters [CppParam { name: "m_Texture", ty: "UnityEngine::Texture2D", modifiers: "", def_value: None }, CppParam { name: "m_Sprite", ty: "UnityEngine::Sprite", modifiers: "", def_value: None }, CppParam { name: "m_RenderTexture", ty: "UnityEngine::RenderTexture", modifiers: "", def_value: None }, CppParam { name: "m_VectorImage", ty: "UnityEngine::UIElements::VectorImage", modifiers: "", def_value: None }]
constexpr Background(UnityEngine::Texture2D m_Texture, UnityEngine::Sprite m_Sprite, UnityEngine::RenderTexture m_RenderTexture, UnityEngine::UIElements::VectorImage m_VectorImage) noexcept;


                    constexpr Background(Background const&) = default;
                    constexpr Background(Background&&) = default;
                    constexpr Background& operator=(Background const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Background& operator=(Background&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Background(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::Texture2D __declspec(property(get=__get_m_Texture, put=__set_m_Texture))  m_Texture;

constexpr void __set_m_Texture(UnityEngine::Texture2D value) ;

constexpr UnityEngine::Texture2D __get_m_Texture() const;

 UnityEngine::Sprite __declspec(property(get=__get_m_Sprite, put=__set_m_Sprite))  m_Sprite;

constexpr void __set_m_Sprite(UnityEngine::Sprite value) ;

constexpr UnityEngine::Sprite __get_m_Sprite() const;

 UnityEngine::RenderTexture __declspec(property(get=__get_m_RenderTexture, put=__set_m_RenderTexture))  m_RenderTexture;

constexpr void __set_m_RenderTexture(UnityEngine::RenderTexture value) ;

constexpr UnityEngine::RenderTexture __get_m_RenderTexture() const;

 UnityEngine::UIElements::VectorImage __declspec(property(get=__get_m_VectorImage, put=__set_m_VectorImage))  m_VectorImage;

constexpr void __set_m_VectorImage(UnityEngine::UIElements::VectorImage value) ;

constexpr UnityEngine::UIElements::VectorImage __get_m_VectorImage() const;


// Properties

 UnityEngine::Texture2D __declspec(property(get=get_texture, put=set_texture))  texture;

 UnityEngine::Sprite __declspec(property(get=get_sprite, put=set_sprite))  sprite;

 UnityEngine::RenderTexture __declspec(property(get=get_renderTexture, put=set_renderTexture))  renderTexture;

 UnityEngine::UIElements::VectorImage __declspec(property(get=get_vectorImage, put=set_vectorImage))  vectorImage;


// Methods

/// @brief Method get_texture addr 0x2cf84a8 size 0x8 virtual false final false
 UnityEngine::Texture2D get_texture() ;

/// @brief Method set_texture addr 0x2cf84b0 size 0x7c virtual false final false
 void set_texture(UnityEngine::Texture2D value) ;

/// @brief Method get_sprite addr 0x2cf852c size 0x8 virtual false final false
 UnityEngine::Sprite get_sprite() ;

/// @brief Method set_sprite addr 0x2cf8534 size 0x7c virtual false final false
 void set_sprite(UnityEngine::Sprite value) ;

/// @brief Method get_renderTexture addr 0x2cf85b0 size 0x8 virtual false final false
 UnityEngine::RenderTexture get_renderTexture() ;

/// @brief Method set_renderTexture addr 0x2cf85b8 size 0x7c virtual false final false
 void set_renderTexture(UnityEngine::RenderTexture value) ;

/// @brief Method get_vectorImage addr 0x2cf8634 size 0x8 virtual false final false
 UnityEngine::UIElements::VectorImage get_vectorImage() ;

/// @brief Method set_vectorImage addr 0x2cf863c size 0x7c virtual false final false
 void set_vectorImage(UnityEngine::UIElements::VectorImage value) ;

/// @brief Method FromTexture2D addr 0x2cf86b8 size 0x34 virtual false final false
static UnityEngine::UIElements::Background FromTexture2D(UnityEngine::Texture2D t) ;

/// @brief Method FromRenderTexture addr 0x2cf86ec size 0x34 virtual false final false
static UnityEngine::UIElements::Background FromRenderTexture(UnityEngine::RenderTexture rt) ;

/// @brief Method FromSprite addr 0x2cf8720 size 0x34 virtual false final false
static UnityEngine::UIElements::Background FromSprite(UnityEngine::Sprite s) ;

/// @brief Method FromVectorImage addr 0x2cf8754 size 0x34 virtual false final false
static UnityEngine::UIElements::Background FromVectorImage(UnityEngine::UIElements::VectorImage vi) ;

/// @brief Method FromObject addr 0x2cf8788 size 0x258 virtual false final false
static UnityEngine::UIElements::Background FromObject(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method op_Equality addr 0x2cf89e0 size 0x108 virtual false final false
static bool op_Equality(UnityEngine::UIElements::Background lhs, UnityEngine::UIElements::Background rhs) ;

/// @brief Method op_Inequality addr 0x2cf8ae8 size 0x38 virtual false final false
static bool op_Inequality(UnityEngine::UIElements::Background lhs, UnityEngine::UIElements::Background rhs) ;

/// @brief Method Equals addr 0x2cf8b20 size 0x34 virtual true final true
 bool Equals(UnityEngine::UIElements::Background other) ;

/// @brief Method Equals addr 0x2cf8b54 size 0x90 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x2cf8be4 size 0x98 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x2cf8c7c size 0x138 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::Background, "UnityEngine.UIElements", "Background");
