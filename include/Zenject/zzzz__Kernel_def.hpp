#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace {
namespace Zenject {
class IFixedTickable;
}
namespace Zenject {
class IInitializable;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class ITickable;
}
namespace Zenject {
class InitializableManager;
}
namespace Zenject {
class DisposableManager;
}
namespace Zenject {
class TickableManager;
}
namespace System {
class IDisposable;
}
namespace Zenject {
class ILateDisposable;
}
namespace Zenject {
class ILateTickable;
}
// Forward declare root types
namespace Zenject {
class Kernel;
}
// Type: Zenject::Kernel
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11264))
// CS Name: Zenject.Kernel
class CORDL_TYPE Kernel : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Zenject::IInitializable
constexpr operator  ::Zenject::IInitializable() const noexcept;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief Convert operator to ::Zenject::ITickable
constexpr operator  ::Zenject::ITickable() const noexcept;

/// @brief Convert operator to ::Zenject::ILateTickable
constexpr operator  ::Zenject::ILateTickable() const noexcept;

/// @brief Convert operator to ::Zenject::IFixedTickable
constexpr operator  ::Zenject::IFixedTickable() const noexcept;

/// @brief Convert operator to ::Zenject::ILateDisposable
constexpr operator  ::Zenject::ILateDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~Kernel() = default;

// Ctor Parameters [CppParam { name: "", ty: "Kernel", modifiers: " const&", def_value: None }]
constexpr Kernel(Kernel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Kernel", modifiers: "&&", def_value: None }]
constexpr Kernel(Kernel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Kernel(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Kernel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Kernel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Kernel& operator=(Kernel&& o) noexcept = default;
  constexpr Kernel& operator=(Kernel const& o) noexcept = default;
                


// Fields

 ::Zenject::TickableManager __declspec(property(get=__get__tickableManager, put=__set__tickableManager))  _tickableManager;

constexpr void __set__tickableManager(::Zenject::TickableManager value) ;

constexpr ::Zenject::TickableManager __get__tickableManager() const;

 ::Zenject::InitializableManager __declspec(property(get=__get__initializableManager, put=__set__initializableManager))  _initializableManager;

constexpr void __set__initializableManager(::Zenject::InitializableManager value) ;

constexpr ::Zenject::InitializableManager __get__initializableManager() const;

 ::Zenject::DisposableManager __declspec(property(get=__get__disposablesManager, put=__set__disposablesManager))  _disposablesManager;

constexpr void __set__disposablesManager(::Zenject::DisposableManager value) ;

constexpr ::Zenject::DisposableManager __get__disposablesManager() const;


// Methods

/// @brief Method Initialize addr 0x2d9b658 size 0x18 virtual true final false
 void Initialize() ;

/// @brief Method Dispose addr 0x2d9b670 size 0x18 virtual true final false
 void Dispose() ;

/// @brief Method LateDispose addr 0x2d9b688 size 0x18 virtual true final false
 void LateDispose() ;

/// @brief Method Tick addr 0x2d9b6a0 size 0x18 virtual true final false
 void Tick() ;

/// @brief Method LateTick addr 0x2d9b740 size 0x18 virtual true final false
 void LateTick() ;

/// @brief Method FixedTick addr 0x2d9b7e0 size 0x18 virtual true final false
 void FixedTick() ;

// Ctor Parameters []
explicit Kernel() ;

/// @brief Method .ctor addr 0x2d9b880 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method __zenCreate addr 0x2d9b888 size 0x5c virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenFieldSetter0 addr 0x2d9b8e4 size 0x134 virtual false final false
static void __zenFieldSetter0(::bs_hook::Il2CppWrapperType P_0, ::bs_hook::Il2CppWrapperType P_1) ;

/// @brief Method __zenFieldSetter1 addr 0x2d9ba18 size 0x134 virtual false final false
static void __zenFieldSetter1(::bs_hook::Il2CppWrapperType P_0, ::bs_hook::Il2CppWrapperType P_1) ;

/// @brief Method __zenFieldSetter2 addr 0x2d9bb4c size 0x134 virtual false final false
static void __zenFieldSetter2(::bs_hook::Il2CppWrapperType P_0, ::bs_hook::Il2CppWrapperType P_1) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d9bc80 size 0x4c8 virtual false final false
static ::Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
NEED_NO_BOX(::Zenject::Kernel);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Kernel, "Zenject", "Kernel");
