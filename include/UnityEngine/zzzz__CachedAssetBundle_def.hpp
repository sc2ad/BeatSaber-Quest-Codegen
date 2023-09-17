#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
namespace {
namespace UnityEngine {
struct Hash128;
}
// Forward declare root types
namespace UnityEngine {
struct CachedAssetBundle;
}
// Type: UnityEngine::CachedAssetBundle
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10086))
// CS Name: UnityEngine.CachedAssetBundle
struct CORDL_TYPE CachedAssetBundle : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_Name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_Hash", ty: "::UnityEngine::Hash128", modifiers: "", def_value: None }]
constexpr CachedAssetBundle(::StringW m_Name, ::UnityEngine::Hash128 m_Hash) noexcept;


                    constexpr CachedAssetBundle(CachedAssetBundle const&) = default;
                    constexpr CachedAssetBundle(CachedAssetBundle&&) = default;
                    constexpr CachedAssetBundle& operator=(CachedAssetBundle const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr CachedAssetBundle& operator=(CachedAssetBundle&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit CachedAssetBundle(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get_m_Name, put=__set_m_Name))  m_Name;

constexpr void __set_m_Name(::StringW value) ;

constexpr ::StringW __get_m_Name() const;

 ::UnityEngine::Hash128 __declspec(property(get=__get_m_Hash, put=__set_m_Hash))  m_Hash;

constexpr void __set_m_Hash(::UnityEngine::Hash128 value) ;

constexpr ::UnityEngine::Hash128 __get_m_Hash() const;


// Properties

 ::StringW __declspec(property(get=get_name))  name;

 ::UnityEngine::Hash128 __declspec(property(get=get_hash))  hash;


// Methods

/// @brief Method .ctor addr 0x2b4f304 size 0xc virtual false final false
 void _ctor(::StringW name, ::UnityEngine::Hash128 hash) ;

/// @brief Method get_name addr 0x2b4ecf4 size 0x8 virtual false final false
 ::StringW get_name() ;

/// @brief Method get_hash addr 0x2b4ecfc size 0xc virtual false final false
 ::UnityEngine::Hash128 get_hash() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::CachedAssetBundle, "UnityEngine", "CachedAssetBundle");
