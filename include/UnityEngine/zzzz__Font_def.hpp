#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
class UnityEngine__Font__FontTextureRebuildCallback;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace UnityEngine {
class Font;
}
namespace UnityEngine {
class UnityEngine__Font__FontTextureRebuildCallback;
}
// Type: ::FontTextureRebuildCallback
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15792))
// CS Name: UnityEngine.Font::FontTextureRebuildCallback
class CORDL_TYPE UnityEngine__Font__FontTextureRebuildCallback : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~UnityEngine__Font__FontTextureRebuildCallback() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__Font__FontTextureRebuildCallback", modifiers: " const&", def_value: None }]
constexpr UnityEngine__Font__FontTextureRebuildCallback(UnityEngine__Font__FontTextureRebuildCallback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__Font__FontTextureRebuildCallback", modifiers: "&&", def_value: None }]
constexpr UnityEngine__Font__FontTextureRebuildCallback(UnityEngine__Font__FontTextureRebuildCallback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__Font__FontTextureRebuildCallback(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr UnityEngine__Font__FontTextureRebuildCallback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__Font__FontTextureRebuildCallback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__Font__FontTextureRebuildCallback& operator=(UnityEngine__Font__FontTextureRebuildCallback&& o) noexcept = default;
  constexpr UnityEngine__Font__FontTextureRebuildCallback& operator=(UnityEngine__Font__FontTextureRebuildCallback const& o) noexcept = default;
                


// Methods

static UnityEngine::UnityEngine__Font__FontTextureRebuildCallback New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2bd6644 size 0xbc virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2bd6700 size 0x14 virtual true final false
 void Invoke() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
// Type: UnityEngine::Font
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10142))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15793))
// CS Name: UnityEngine.Font
class CORDL_TYPE Font : public UnityEngine::Object {
public:
// Declarations
using FontTextureRebuildCallback = UnityEngine::UnityEngine__Font__FontTextureRebuildCallback;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Font() = default;

// Ctor Parameters [CppParam { name: "", ty: "Font", modifiers: " const&", def_value: None }]
constexpr Font(Font const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Font", modifiers: "&&", def_value: None }]
constexpr Font(Font&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Font(void* ptr) noexcept : UnityEngine::Object(ptr) {
}


  constexpr Font& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Font& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Font& operator=(Font&& o) noexcept = default;
  constexpr Font& operator=(Font const& o) noexcept = default;
                


// Fields

static System::Action_1<UnityEngine::Font> __declspec(property(get=__get_textureRebuilt, put=__set_textureRebuilt))  textureRebuilt;

static void __set_textureRebuilt(System::Action_1<UnityEngine::Font> value) ;

static System::Action_1<UnityEngine::Font> __get_textureRebuilt() ;

 UnityEngine::UnityEngine__Font__FontTextureRebuildCallback __declspec(property(get=__get_m_FontTextureRebuildCallback, put=__set_m_FontTextureRebuildCallback))  m_FontTextureRebuildCallback;

constexpr void __set_m_FontTextureRebuildCallback(UnityEngine::UnityEngine__Font__FontTextureRebuildCallback value) ;

constexpr UnityEngine::UnityEngine__Font__FontTextureRebuildCallback __get_m_FontTextureRebuildCallback() const;


// Properties

 UnityEngine::Material __declspec(property(get=get_material))  material;

 bool __declspec(property(get=get_dynamic))  dynamic;

 int32_t __declspec(property(get=get_fontSize))  fontSize;


// Methods

/// @brief Method add_textureRebuilt addr 0x2bd6258 size 0xcc virtual false final false
static void add_textureRebuilt(System::Action_1<UnityEngine::Font> value) ;

/// @brief Method remove_textureRebuilt addr 0x2bd6324 size 0xcc virtual false final false
static void remove_textureRebuilt(System::Action_1<UnityEngine::Font> value) ;

/// @brief Method get_material addr 0x2bd63f0 size 0x3c virtual false final false
 UnityEngine::Material get_material() ;

/// @brief Method get_dynamic addr 0x2bd53b8 size 0x3c virtual false final false
 bool get_dynamic() ;

/// @brief Method get_fontSize addr 0x2bd642c size 0x3c virtual false final false
 int32_t get_fontSize() ;

static UnityEngine::Font New_ctor() ;

/// @brief Method .ctor addr 0x2bd6468 size 0x84 virtual false final false
 void _ctor() ;

/// @brief Method InvokeTextureRebuilt_Internal addr 0x2bd6530 size 0x8c virtual false final false
static void InvokeTextureRebuilt_Internal(UnityEngine::Font font) ;

/// @brief Method HasCharacter addr 0x2bd65bc size 0x44 virtual false final false
 bool HasCharacter(char16_t c) ;

/// @brief Method HasCharacter addr 0x2bd6600 size 0x44 virtual false final false
 bool HasCharacter(int32_t c) ;

/// @brief Method Internal_CreateFont addr 0x2bd64ec size 0x44 virtual false final false
static void Internal_CreateFont(UnityEngine::Font self, ::StringW name) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::Font);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Font, "UnityEngine", "Font");
NEED_NO_BOX(UnityEngine::UnityEngine__Font__FontTextureRebuildCallback);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UnityEngine__Font__FontTextureRebuildCallback, "UnityEngine", "Font/FontTextureRebuildCallback");
