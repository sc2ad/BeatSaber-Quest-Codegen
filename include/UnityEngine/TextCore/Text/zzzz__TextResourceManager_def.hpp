#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine::TextCore::Text {
class FontAsset;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
class TextResourceManager;
}
namespace UnityEngine::TextCore::Text {
struct UnityEngine__TextCore__Text__TextResourceManager__FontAssetRef;
}
// Type: ::FontAssetRef
namespace UnityEngine::TextCore::Text {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13533))
// CS Name: UnityEngine.TextCore.Text.TextResourceManager::FontAssetRef
struct CORDL_TYPE UnityEngine__TextCore__Text__TextResourceManager__FontAssetRef : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "nameHashCode", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "familyNameHashCode", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "styleNameHashCode", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "familyNameAndStyleHashCode", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "fontAsset", ty: "UnityEngine::TextCore::Text::FontAsset", modifiers: "", def_value: None }]
constexpr UnityEngine__TextCore__Text__TextResourceManager__FontAssetRef(int32_t nameHashCode, int32_t familyNameHashCode, int32_t styleNameHashCode, int64_t familyNameAndStyleHashCode, UnityEngine::TextCore::Text::FontAsset fontAsset) noexcept;


                    constexpr UnityEngine__TextCore__Text__TextResourceManager__FontAssetRef(UnityEngine__TextCore__Text__TextResourceManager__FontAssetRef const&) = default;
                    constexpr UnityEngine__TextCore__Text__TextResourceManager__FontAssetRef(UnityEngine__TextCore__Text__TextResourceManager__FontAssetRef&&) = default;
                    constexpr UnityEngine__TextCore__Text__TextResourceManager__FontAssetRef& operator=(UnityEngine__TextCore__Text__TextResourceManager__FontAssetRef const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__TextCore__Text__TextResourceManager__FontAssetRef& operator=(UnityEngine__TextCore__Text__TextResourceManager__FontAssetRef&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__TextCore__Text__TextResourceManager__FontAssetRef(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_nameHashCode, put=__set_nameHashCode))  nameHashCode;

constexpr void __set_nameHashCode(int32_t value) ;

constexpr int32_t __get_nameHashCode() const;

 int32_t __declspec(property(get=__get_familyNameHashCode, put=__set_familyNameHashCode))  familyNameHashCode;

constexpr void __set_familyNameHashCode(int32_t value) ;

constexpr int32_t __get_familyNameHashCode() const;

 int32_t __declspec(property(get=__get_styleNameHashCode, put=__set_styleNameHashCode))  styleNameHashCode;

constexpr void __set_styleNameHashCode(int32_t value) ;

constexpr int32_t __get_styleNameHashCode() const;

 int64_t __declspec(property(get=__get_familyNameAndStyleHashCode, put=__set_familyNameAndStyleHashCode))  familyNameAndStyleHashCode;

constexpr void __set_familyNameAndStyleHashCode(int64_t value) ;

constexpr int64_t __get_familyNameAndStyleHashCode() const;

 UnityEngine::TextCore::Text::FontAsset __declspec(property(get=__get_fontAsset, put=__set_fontAsset))  fontAsset;

constexpr void __set_fontAsset(UnityEngine::TextCore::Text::FontAsset value) ;

constexpr UnityEngine::TextCore::Text::FontAsset __get_fontAsset() const;


// Methods

/// @brief Method .ctor addr 0x2bd21b8 size 0x18 virtual false final false
 void _ctor(int32_t nameHashCode, int32_t familyNameHashCode, int32_t styleNameHashCode, UnityEngine::TextCore::Text::FontAsset fontAsset) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::TextCore::Text
// Type: UnityEngine.TextCore.Text::TextResourceManager
namespace UnityEngine::TextCore::Text {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13534))
// CS Name: UnityEngine.TextCore.Text.TextResourceManager
class CORDL_TYPE TextResourceManager : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using FontAssetRef = UnityEngine::TextCore::Text::UnityEngine__TextCore__Text__TextResourceManager__FontAssetRef;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TextResourceManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "TextResourceManager", modifiers: " const&", def_value: None }]
constexpr TextResourceManager(TextResourceManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TextResourceManager", modifiers: "&&", def_value: None }]
constexpr TextResourceManager(TextResourceManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TextResourceManager(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TextResourceManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TextResourceManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TextResourceManager& operator=(TextResourceManager&& o) noexcept = default;
  constexpr TextResourceManager& operator=(TextResourceManager const& o) noexcept = default;
                


// Fields

static System::Collections::Generic::Dictionary_2<int32_t,UnityEngine::TextCore::Text::UnityEngine__TextCore__Text__TextResourceManager__FontAssetRef> __declspec(property(get=__get_s_FontAssetReferences, put=__set_s_FontAssetReferences))  s_FontAssetReferences;

static void __set_s_FontAssetReferences(System::Collections::Generic::Dictionary_2<int32_t,UnityEngine::TextCore::Text::UnityEngine__TextCore__Text__TextResourceManager__FontAssetRef> value) ;

static System::Collections::Generic::Dictionary_2<int32_t,UnityEngine::TextCore::Text::UnityEngine__TextCore__Text__TextResourceManager__FontAssetRef> __get_s_FontAssetReferences() ;

static System::Collections::Generic::Dictionary_2<int32_t,UnityEngine::TextCore::Text::FontAsset> __declspec(property(get=__get_s_FontAssetNameReferenceLookup, put=__set_s_FontAssetNameReferenceLookup))  s_FontAssetNameReferenceLookup;

static void __set_s_FontAssetNameReferenceLookup(System::Collections::Generic::Dictionary_2<int32_t,UnityEngine::TextCore::Text::FontAsset> value) ;

static System::Collections::Generic::Dictionary_2<int32_t,UnityEngine::TextCore::Text::FontAsset> __get_s_FontAssetNameReferenceLookup() ;

static System::Collections::Generic::Dictionary_2<int64_t,UnityEngine::TextCore::Text::FontAsset> __declspec(property(get=__get_s_FontAssetFamilyNameAndStyleReferenceLookup, put=__set_s_FontAssetFamilyNameAndStyleReferenceLookup))  s_FontAssetFamilyNameAndStyleReferenceLookup;

static void __set_s_FontAssetFamilyNameAndStyleReferenceLookup(System::Collections::Generic::Dictionary_2<int64_t,UnityEngine::TextCore::Text::FontAsset> value) ;

static System::Collections::Generic::Dictionary_2<int64_t,UnityEngine::TextCore::Text::FontAsset> __get_s_FontAssetFamilyNameAndStyleReferenceLookup() ;

static System::Collections::Generic::List_1<int32_t> __declspec(property(get=__get_s_FontAssetRemovalList, put=__set_s_FontAssetRemovalList))  s_FontAssetRemovalList;

static void __set_s_FontAssetRemovalList(System::Collections::Generic::List_1<int32_t> value) ;

static System::Collections::Generic::List_1<int32_t> __get_s_FontAssetRemovalList() ;

static int32_t __declspec(property(get=__get_k_RegularStyleHashCode, put=__set_k_RegularStyleHashCode))  k_RegularStyleHashCode;

static void __set_k_RegularStyleHashCode(int32_t value) ;

static int32_t __get_k_RegularStyleHashCode() ;


// Methods

/// @brief Method AddFontAsset addr 0x2bd1c6c size 0x4f4 virtual false final false
static void AddFontAsset(UnityEngine::TextCore::Text::FontAsset fontAsset) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::TextCore::Text
NEED_NO_BOX(UnityEngine::TextCore::Text::TextResourceManager);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TextCore::Text::TextResourceManager, "UnityEngine.TextCore.Text", "TextResourceManager");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TextCore::Text::UnityEngine__TextCore__Text__TextResourceManager__FontAssetRef, "UnityEngine.TextCore.Text", "TextResourceManager/FontAssetRef");
