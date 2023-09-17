#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Texture;
}
namespace System::Collections::Generic {
template<typename T>
class Stack_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine::UIElements {
struct TextureId;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class TextureRegistry;
}
namespace UnityEngine::UIElements {
struct ____UnityEngine__UIElements__TextureRegistry__TextureInfo;
}
// Type: ::TextureInfo
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7439))
// CS Name: UnityEngine.UIElements.TextureRegistry::TextureInfo
struct CORDL_TYPE ____UnityEngine__UIElements__TextureRegistry__TextureInfo : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "texture", ty: "::UnityEngine::Texture", modifiers: "", def_value: None }, CppParam { name: "dynamic", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "refCount", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__UIElements__TextureRegistry__TextureInfo(::UnityEngine::Texture texture, bool dynamic, int32_t refCount) noexcept;


                    constexpr ____UnityEngine__UIElements__TextureRegistry__TextureInfo(____UnityEngine__UIElements__TextureRegistry__TextureInfo const&) = default;
                    constexpr ____UnityEngine__UIElements__TextureRegistry__TextureInfo(____UnityEngine__UIElements__TextureRegistry__TextureInfo&&) = default;
                    constexpr ____UnityEngine__UIElements__TextureRegistry__TextureInfo& operator=(____UnityEngine__UIElements__TextureRegistry__TextureInfo const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__UIElements__TextureRegistry__TextureInfo& operator=(____UnityEngine__UIElements__TextureRegistry__TextureInfo&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__UIElements__TextureRegistry__TextureInfo(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::Texture __declspec(property(get=__get_texture, put=__set_texture))  texture;

constexpr void __set_texture(::UnityEngine::Texture value) ;

constexpr ::UnityEngine::Texture __get_texture() const;

 bool __declspec(property(get=__get_dynamic, put=__set_dynamic))  dynamic;

constexpr void __set_dynamic(bool value) ;

constexpr bool __get_dynamic() const;

 int32_t __declspec(property(get=__get_refCount, put=__set_refCount))  refCount;

constexpr void __set_refCount(int32_t value) ;

constexpr int32_t __get_refCount() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::TextureRegistry
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7440))
// CS Name: UnityEngine.UIElements.TextureRegistry
class CORDL_TYPE TextureRegistry : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using TextureInfo = ::UnityEngine::UIElements::____UnityEngine__UIElements__TextureRegistry__TextureInfo;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~TextureRegistry() = default;

// Ctor Parameters [CppParam { name: "", ty: "TextureRegistry", modifiers: " const&", def_value: None }]
constexpr TextureRegistry(TextureRegistry const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TextureRegistry", modifiers: "&&", def_value: None }]
constexpr TextureRegistry(TextureRegistry&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TextureRegistry(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TextureRegistry& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TextureRegistry& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TextureRegistry& operator=(TextureRegistry&& o) noexcept = default;
  constexpr TextureRegistry& operator=(TextureRegistry const& o) noexcept = default;
                


// Fields

 ::System::Collections::Generic::List_1<::UnityEngine::UIElements::____UnityEngine__UIElements__TextureRegistry__TextureInfo> __declspec(property(get=__get_m_Textures, put=__set_m_Textures))  m_Textures;

constexpr void __set_m_Textures(::System::Collections::Generic::List_1<::UnityEngine::UIElements::____UnityEngine__UIElements__TextureRegistry__TextureInfo> value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::____UnityEngine__UIElements__TextureRegistry__TextureInfo> __get_m_Textures() const;

 ::System::Collections::Generic::Dictionary_2<::UnityEngine::Texture,::UnityEngine::UIElements::TextureId> __declspec(property(get=__get_m_TextureToId, put=__set_m_TextureToId))  m_TextureToId;

constexpr void __set_m_TextureToId(::System::Collections::Generic::Dictionary_2<::UnityEngine::Texture,::UnityEngine::UIElements::TextureId> value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Texture,::UnityEngine::UIElements::TextureId> __get_m_TextureToId() const;

 ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::TextureId> __declspec(property(get=__get_m_FreeIds, put=__set_m_FreeIds))  m_FreeIds;

constexpr void __set_m_FreeIds(::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::TextureId> value) ;

constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::TextureId> __get_m_FreeIds() const;

/// @brief Field maxTextures offset 0
static constexpr int32_t  maxTextures{2048};

static ::UnityEngine::UIElements::TextureRegistry __declspec(property(get=__get__instance_k__BackingField, put=__set__instance_k__BackingField))  _instance_k__BackingField;

static void __set__instance_k__BackingField(::UnityEngine::UIElements::TextureRegistry value) ;

static ::UnityEngine::UIElements::TextureRegistry __get__instance_k__BackingField() ;


// Properties

static ::UnityEngine::UIElements::TextureRegistry __declspec(property(get=get_instance))  instance;


// Methods

/// @brief Method get_instance addr 0x2d061a8 size 0x58 virtual false final false
static ::UnityEngine::UIElements::TextureRegistry get_instance() ;

/// @brief Method GetTexture addr 0x2d06200 size 0x13c virtual false final false
 ::UnityEngine::Texture GetTexture(::UnityEngine::UIElements::TextureId id) ;

/// @brief Method AllocAndAcquireDynamic addr 0x2d0633c size 0x1c virtual false final false
 ::UnityEngine::UIElements::TextureId AllocAndAcquireDynamic() ;

/// @brief Method UpdateDynamic addr 0x2d065b8 size 0x1ac virtual false final false
 void UpdateDynamic(::UnityEngine::UIElements::TextureId id, ::UnityEngine::Texture texture) ;

/// @brief Method AllocAndAcquire addr 0x2d06358 size 0x260 virtual false final false
 ::UnityEngine::UIElements::TextureId AllocAndAcquire(::UnityEngine::Texture texture, bool dynamic) ;

/// @brief Method Acquire addr 0x2d06764 size 0x140 virtual false final false
 ::UnityEngine::UIElements::TextureId Acquire(::UnityEngine::Texture tex) ;

/// @brief Method Release addr 0x2d068a4 size 0x1f0 virtual false final false
 void Release(::UnityEngine::UIElements::TextureId id) ;

// Ctor Parameters []
explicit TextureRegistry() ;

/// @brief Method .ctor addr 0x2d06a94 size 0x10c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::TextureRegistry);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TextureRegistry, "UnityEngine.UIElements", "TextureRegistry");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::____UnityEngine__UIElements__TextureRegistry__TextureInfo, "UnityEngine.UIElements", "TextureRegistry/TextureInfo");
