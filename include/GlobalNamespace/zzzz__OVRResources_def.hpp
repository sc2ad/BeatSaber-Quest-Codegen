#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class AssetBundle;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class ____GlobalNamespace__OVRResources____c__DisplayClass3_0_1;
}
namespace GlobalNamespace {
class OVRResources;
}
namespace GlobalNamespace {
class ____GlobalNamespace__OVRResources____c__DisplayClass2_0;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T>
class ____GlobalNamespace__OVRResources____c__DisplayClass3_0_1<T>;
}
// Type: ::<>c__DisplayClass2_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8809))
// CS Name: OVRResources::<>c__DisplayClass2_0
class CORDL_TYPE ____GlobalNamespace__OVRResources____c__DisplayClass2_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____GlobalNamespace__OVRResources____c__DisplayClass2_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__OVRResources____c__DisplayClass2_0", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__OVRResources____c__DisplayClass2_0(____GlobalNamespace__OVRResources____c__DisplayClass2_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__OVRResources____c__DisplayClass2_0", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__OVRResources____c__DisplayClass2_0(____GlobalNamespace__OVRResources____c__DisplayClass2_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__OVRResources____c__DisplayClass2_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__OVRResources____c__DisplayClass2_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__OVRResources____c__DisplayClass2_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__OVRResources____c__DisplayClass2_0& operator=(____GlobalNamespace__OVRResources____c__DisplayClass2_0&& o) noexcept = default;
  constexpr ____GlobalNamespace__OVRResources____c__DisplayClass2_0& operator=(____GlobalNamespace__OVRResources____c__DisplayClass2_0 const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_path, put=__set_path))  path;

constexpr void __set_path(::StringW value) ;

constexpr ::StringW __get_path() const;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__OVRResources____c__DisplayClass2_0() ;

/// @brief Method .ctor addr 0x26026ac size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <Load>b__0 addr 0x2602790 size 0x34 virtual false final false
 bool _Load_b__0(::StringW s) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass3_0`1
// Type: ::OVRResources
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8811))
// CS Name: OVRResources
class CORDL_TYPE OVRResources : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
template<typename T>
using __c__DisplayClass3_0_1 = ::GlobalNamespace::____GlobalNamespace__OVRResources____c__DisplayClass3_0_1<T>;

using __c__DisplayClass2_0 = ::GlobalNamespace::____GlobalNamespace__OVRResources____c__DisplayClass2_0;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~OVRResources() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRResources", modifiers: " const&", def_value: None }]
constexpr OVRResources(OVRResources const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRResources", modifiers: "&&", def_value: None }]
constexpr OVRResources(OVRResources&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRResources(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr OVRResources& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRResources& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRResources& operator=(OVRResources&& o) noexcept = default;
  constexpr OVRResources& operator=(OVRResources const& o) noexcept = default;
                


// Fields

static ::UnityEngine::AssetBundle __declspec(property(get=__get_resourceBundle, put=__set_resourceBundle))  resourceBundle;

static void __set_resourceBundle(::UnityEngine::AssetBundle value) ;

static ::UnityEngine::AssetBundle __get_resourceBundle() ;

static ::System::Collections::Generic::List_1<::StringW> __declspec(property(get=__get_assetNames, put=__set_assetNames))  assetNames;

static void __set_assetNames(::System::Collections::Generic::List_1<::StringW> value) ;

static ::System::Collections::Generic::List_1<::StringW> __get_assetNames() ;


// Methods

/// @brief Method Load addr 0x26024c8 size 0x1e4 virtual false final false
static ::UnityEngine::Object Load(::StringW path) ;

/// @brief Method Load addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T Load(::StringW path) ;

/// @brief Method SetResourceBundle addr 0x26026b4 size 0xd4 virtual false final false
static void SetResourceBundle(::UnityEngine::AssetBundle bundle) ;

// Ctor Parameters []
explicit OVRResources() ;

/// @brief Method .ctor addr 0x2602788 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass3_0`1
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8810))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8810), inst: 2 })
// CS Name: OVRResources::<>c__DisplayClass3_0`1
class CORDL_TYPE ____GlobalNamespace__OVRResources____c__DisplayClass3_0_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____GlobalNamespace__OVRResources____c__DisplayClass3_0_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__OVRResources____c__DisplayClass3_0_1", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__OVRResources____c__DisplayClass3_0_1(____GlobalNamespace__OVRResources____c__DisplayClass3_0_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__OVRResources____c__DisplayClass3_0_1", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__OVRResources____c__DisplayClass3_0_1(____GlobalNamespace__OVRResources____c__DisplayClass3_0_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__OVRResources____c__DisplayClass3_0_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__OVRResources____c__DisplayClass3_0_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__OVRResources____c__DisplayClass3_0_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__OVRResources____c__DisplayClass3_0_1& operator=(____GlobalNamespace__OVRResources____c__DisplayClass3_0_1&& o) noexcept = default;
  constexpr ____GlobalNamespace__OVRResources____c__DisplayClass3_0_1& operator=(____GlobalNamespace__OVRResources____c__DisplayClass3_0_1 const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_path, put=__set_path))  path;

constexpr void __set_path(::StringW value) ;

constexpr ::StringW __get_path() const;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__OVRResources____c__DisplayClass3_0_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <Load>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 bool _Load_b__0(::StringW s) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::____GlobalNamespace__OVRResources____c__DisplayClass3_0_1, "", "OVRResources/<>c__DisplayClass3_0`1");
NEED_NO_BOX(::GlobalNamespace::OVRResources);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRResources, "", "OVRResources");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__OVRResources____c__DisplayClass2_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__OVRResources____c__DisplayClass2_0, "", "OVRResources/<>c__DisplayClass2_0");
