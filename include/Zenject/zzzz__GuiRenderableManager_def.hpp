#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System {
class Type;
}
namespace Zenject {
class IGuiRenderable;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class Zenject__GuiRenderableManager__RenderableInfo;
}
namespace Zenject {
class Zenject__GuiRenderableManager____c;
}
namespace ModestTree::Util {
template<typename T1,typename T2>
class ValuePair_2;
}
namespace Zenject {
class Zenject__GuiRenderableManager____c__DisplayClass1_0;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace Zenject {
class GuiRenderableManager;
}
namespace Zenject {
class Zenject__GuiRenderableManager__RenderableInfo;
}
namespace Zenject {
class Zenject__GuiRenderableManager____c;
}
namespace Zenject {
class Zenject__GuiRenderableManager____c__DisplayClass1_0;
}
// Type: ::RenderableInfo
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11254))
// CS Name: Zenject.GuiRenderableManager::RenderableInfo
class CORDL_TYPE Zenject__GuiRenderableManager__RenderableInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Zenject__GuiRenderableManager__RenderableInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__GuiRenderableManager__RenderableInfo", modifiers: " const&", def_value: None }]
constexpr Zenject__GuiRenderableManager__RenderableInfo(Zenject__GuiRenderableManager__RenderableInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__GuiRenderableManager__RenderableInfo", modifiers: "&&", def_value: None }]
constexpr Zenject__GuiRenderableManager__RenderableInfo(Zenject__GuiRenderableManager__RenderableInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__GuiRenderableManager__RenderableInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__GuiRenderableManager__RenderableInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__GuiRenderableManager__RenderableInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__GuiRenderableManager__RenderableInfo& operator=(Zenject__GuiRenderableManager__RenderableInfo&& o) noexcept = default;
  constexpr Zenject__GuiRenderableManager__RenderableInfo& operator=(Zenject__GuiRenderableManager__RenderableInfo const& o) noexcept = default;
                


// Fields

 Zenject::IGuiRenderable __declspec(property(get=__get_Renderable, put=__set_Renderable))  Renderable;

constexpr void __set_Renderable(Zenject::IGuiRenderable value) ;

constexpr Zenject::IGuiRenderable __get_Renderable() const;

 int32_t __declspec(property(get=__get_Priority, put=__set_Priority))  Priority;

constexpr void __set_Priority(int32_t value) ;

constexpr int32_t __get_Priority() const;


// Methods

static Zenject::Zenject__GuiRenderableManager__RenderableInfo New_ctor(Zenject::IGuiRenderable renderable, int32_t priority) ;

/// @brief Method .ctor addr 0x2d9895c size 0x30 virtual false final false
 void _ctor(Zenject::IGuiRenderable renderable, int32_t priority) ;

/// @brief Method __zenCreate addr 0x2d990d8 size 0x110 virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d991e8 size 0x304 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__DisplayClass1_0
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11255))
// CS Name: Zenject.GuiRenderableManager::<>c__DisplayClass1_0
class CORDL_TYPE Zenject__GuiRenderableManager____c__DisplayClass1_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Zenject__GuiRenderableManager____c__DisplayClass1_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__GuiRenderableManager____c__DisplayClass1_0", modifiers: " const&", def_value: None }]
constexpr Zenject__GuiRenderableManager____c__DisplayClass1_0(Zenject__GuiRenderableManager____c__DisplayClass1_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__GuiRenderableManager____c__DisplayClass1_0", modifiers: "&&", def_value: None }]
constexpr Zenject__GuiRenderableManager____c__DisplayClass1_0(Zenject__GuiRenderableManager____c__DisplayClass1_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__GuiRenderableManager____c__DisplayClass1_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__GuiRenderableManager____c__DisplayClass1_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__GuiRenderableManager____c__DisplayClass1_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__GuiRenderableManager____c__DisplayClass1_0& operator=(Zenject__GuiRenderableManager____c__DisplayClass1_0&& o) noexcept = default;
  constexpr Zenject__GuiRenderableManager____c__DisplayClass1_0& operator=(Zenject__GuiRenderableManager____c__DisplayClass1_0 const& o) noexcept = default;
                


// Fields

 Zenject::IGuiRenderable __declspec(property(get=__get_renderable, put=__set_renderable))  renderable;

constexpr void __set_renderable(Zenject::IGuiRenderable value) ;

constexpr Zenject::IGuiRenderable __get_renderable() const;


// Methods

static Zenject::Zenject__GuiRenderableManager____c__DisplayClass1_0 New_ctor() ;

/// @brief Method .ctor addr 0x2d98954 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <.ctor>b__1 addr 0x2d994ec size 0x80 virtual false final false
 bool __ctor_b__1(ModestTree::Util::ValuePair_2<System::Type,int32_t> x) ;

/// @brief Method __zenCreate addr 0x2d9956c size 0x5c virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d995c8 size 0x1c0 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11256))
// CS Name: Zenject.GuiRenderableManager::<>c
class CORDL_TYPE Zenject__GuiRenderableManager____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Zenject__GuiRenderableManager____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__GuiRenderableManager____c", modifiers: " const&", def_value: None }]
constexpr Zenject__GuiRenderableManager____c(Zenject__GuiRenderableManager____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__GuiRenderableManager____c", modifiers: "&&", def_value: None }]
constexpr Zenject__GuiRenderableManager____c(Zenject__GuiRenderableManager____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__GuiRenderableManager____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__GuiRenderableManager____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__GuiRenderableManager____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__GuiRenderableManager____c& operator=(Zenject__GuiRenderableManager____c&& o) noexcept = default;
  constexpr Zenject__GuiRenderableManager____c& operator=(Zenject__GuiRenderableManager____c const& o) noexcept = default;
                


// Fields

static Zenject::Zenject__GuiRenderableManager____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(Zenject::Zenject__GuiRenderableManager____c value) ;

static Zenject::Zenject__GuiRenderableManager____c __get___9() ;

static System::Func_2<ModestTree::Util::ValuePair_2<System::Type,int32_t>,int32_t> __declspec(property(get=__get___9__1_2, put=__set___9__1_2))  __9__1_2;

static void __set___9__1_2(System::Func_2<ModestTree::Util::ValuePair_2<System::Type,int32_t>,int32_t> value) ;

static System::Func_2<ModestTree::Util::ValuePair_2<System::Type,int32_t>,int32_t> __get___9__1_2() ;

static System::Func_2<Zenject::Zenject__GuiRenderableManager__RenderableInfo,int32_t> __declspec(property(get=__get___9__1_0, put=__set___9__1_0))  __9__1_0;

static void __set___9__1_0(System::Func_2<Zenject::Zenject__GuiRenderableManager__RenderableInfo,int32_t> value) ;

static System::Func_2<Zenject::Zenject__GuiRenderableManager__RenderableInfo,int32_t> __get___9__1_0() ;


// Methods

static Zenject::Zenject__GuiRenderableManager____c New_ctor() ;

/// @brief Method .ctor addr 0x2d997ec size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <.ctor>b__1_2 addr 0x2d997f4 size 0x18 virtual false final false
 int32_t __ctor_b__1_2(ModestTree::Util::ValuePair_2<System::Type,int32_t> x) ;

/// @brief Method <.ctor>b__1_0 addr 0x2d9980c size 0x18 virtual false final false
 int32_t __ctor_b__1_0(Zenject::Zenject__GuiRenderableManager__RenderableInfo x) ;

/// @brief Method __zenCreate addr 0x2d99824 size 0x5c virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d99880 size 0x1c0 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::GuiRenderableManager
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11257))
// CS Name: Zenject.GuiRenderableManager
class CORDL_TYPE GuiRenderableManager : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = Zenject::Zenject__GuiRenderableManager____c;

using __c__DisplayClass1_0 = Zenject::Zenject__GuiRenderableManager____c__DisplayClass1_0;

using RenderableInfo = Zenject::Zenject__GuiRenderableManager__RenderableInfo;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GuiRenderableManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "GuiRenderableManager", modifiers: " const&", def_value: None }]
constexpr GuiRenderableManager(GuiRenderableManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GuiRenderableManager", modifiers: "&&", def_value: None }]
constexpr GuiRenderableManager(GuiRenderableManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GuiRenderableManager(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GuiRenderableManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GuiRenderableManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GuiRenderableManager& operator=(GuiRenderableManager&& o) noexcept = default;
  constexpr GuiRenderableManager& operator=(GuiRenderableManager const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<Zenject::Zenject__GuiRenderableManager__RenderableInfo> __declspec(property(get=__get__renderables, put=__set__renderables))  _renderables;

constexpr void __set__renderables(System::Collections::Generic::List_1<Zenject::Zenject__GuiRenderableManager__RenderableInfo> value) ;

constexpr System::Collections::Generic::List_1<Zenject::Zenject__GuiRenderableManager__RenderableInfo> __get__renderables() const;


// Methods

static Zenject::GuiRenderableManager New_ctor(System::Collections::Generic::List_1<Zenject::IGuiRenderable> renderables, System::Collections::Generic::List_1<ModestTree::Util::ValuePair_2<System::Type,int32_t>> priorities) ;

/// @brief Method .ctor addr 0x2d983b4 size 0x5a0 virtual false final false
 void _ctor(System::Collections::Generic::List_1<Zenject::IGuiRenderable> renderables, System::Collections::Generic::List_1<ModestTree::Util::ValuePair_2<System::Type,int32_t>> priorities) ;

/// @brief Method OnGui addr 0x2d9898c size 0x32c virtual false final false
 void OnGui() ;

/// @brief Method __zenCreate addr 0x2d98cb8 size 0x11c virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d98dd4 size 0x304 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::GuiRenderableManager);
DEFINE_IL2CPP_ARG_TYPE(Zenject::GuiRenderableManager, "Zenject", "GuiRenderableManager");
NEED_NO_BOX(Zenject::Zenject__GuiRenderableManager__RenderableInfo);
DEFINE_IL2CPP_ARG_TYPE(Zenject::Zenject__GuiRenderableManager__RenderableInfo, "Zenject", "GuiRenderableManager/RenderableInfo");
NEED_NO_BOX(Zenject::Zenject__GuiRenderableManager____c);
DEFINE_IL2CPP_ARG_TYPE(Zenject::Zenject__GuiRenderableManager____c, "Zenject", "GuiRenderableManager/<>c");
NEED_NO_BOX(Zenject::Zenject__GuiRenderableManager____c__DisplayClass1_0);
DEFINE_IL2CPP_ARG_TYPE(Zenject::Zenject__GuiRenderableManager____c__DisplayClass1_0, "Zenject", "GuiRenderableManager/<>c__DisplayClass1_0");
